"""Exercise Go proxy presence checks and failure handling."""

import os
from pathlib import Path
import subprocess
import tempfile
import unittest


SCRIPTS = Path(__file__).resolve().parent


class ReleaseHelpersTest(unittest.TestCase):
    def setUp(self):
        self.temporary_directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary_directory.cleanup)
        self.directory = Path(self.temporary_directory.name)
        self.environment = {
            **os.environ,
            "PATH": f"{self.directory}{os.pathsep}{os.environ['PATH']}",
        }

    def run_script(self, name, *arguments):
        return subprocess.run(
            [str(SCRIPTS / name), *arguments],
            cwd=self.directory,
            env=self.environment,
            text=True,
            capture_output=True,
        )

    def mock_curl(self, status, exit_code=0):
        curl = self.directory / "curl"
        curl.write_text(f"#!/bin/sh\nprintf '%s' '{status}'\nexit {exit_code}\n")
        curl.chmod(0o755)

    def test_proxy_presence(self):
        for status, expected in [(200, "true"), (404, "false"), (410, "false")]:
            with self.subTest(status=status):
                self.mock_curl(status)
                result = self.run_script("module_exists.sh", "example.com/module", "0.85.0")
                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(result.stdout.strip(), expected)

    def test_proxy_errors_are_not_absence(self):
        for status in [403, 429, 500, 503]:
            with self.subTest(status=status):
                self.mock_curl(status)
                result = self.run_script("module_exists.sh", "example.com/module", "0.85.0")
                self.assertNotEqual(result.returncode, 0)
                self.assertIn(str(status), result.stderr)
                self.assertNotIn("false", result.stdout)

    def test_proxy_transport_failure_is_not_absence(self):
        self.mock_curl("000", exit_code=7)
        result = self.run_script("module_exists.sh", "example.com/module", "0.85.0")
        self.assertNotEqual(result.returncode, 0)
        self.assertNotIn("false", result.stdout)


if __name__ == "__main__":
    unittest.main()
