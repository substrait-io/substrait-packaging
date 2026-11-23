"""Test shared release tag operations against local Git repositories."""

from pathlib import Path
import subprocess
import tempfile
import unittest


SCRIPTS = Path(__file__).resolve().parent


class ReleaseTagsTest(unittest.TestCase):
    def setUp(self):
        self.temporary_directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary_directory.cleanup)
        self.repository = Path(self.temporary_directory.name) / "repository"
        self.repository.mkdir()
        self.remote = self.repository.parent / "remote.git"
        self.git("init", "--bare", str(self.remote))
        self.git("init")
        for name, value in [
            ("user.name", "Test"),
            ("user.email", "test@example.com"),
            ("commit.gpgSign", "false"),
            ("tag.gpgSign", "false"),
        ]:
            self.git("config", name, value)
        self.git("commit", "--allow-empty", "-m", "Initial")
        self.git("remote", "add", "origin", str(self.remote))

    def git(self, *arguments):
        return subprocess.run(
            ["git", *arguments], cwd=self.repository, check=True,
            capture_output=True, text=True,
        ).stdout.strip()

    def script(self, name, tag):
        return subprocess.run(
            [str(SCRIPTS / name), tag], cwd=self.repository,
            capture_output=True, text=True,
        )

    def test_publish_stable_and_prerelease_tags(self):
        for tag in ["java/protobuf/v0.85.0", "go/substrait-protobuf/v0.85.0-alpha.1"]:
            with self.subTest(tag=tag):
                self.assertEqual(self.script("tag_exists.sh", tag).stdout.strip(), "false")
                result = self.script("push_tag.sh", tag)
                self.assertEqual(result.returncode, 0, result.stderr)
                self.assertEqual(self.script("tag_exists.sh", tag).stdout.strip(), "true")
                self.assertEqual(self.git("cat-file", "-t", f"refs/tags/{tag}"), "tag")
                self.assertIn(f"refs/tags/{tag}", self.git("ls-remote", "--tags", "origin"))
                self.assertNotEqual(self.script("push_tag.sh", tag).returncode, 0)

    def test_branch_is_not_a_release_tag(self):
        tag = "java/protobuf/v0.85.0"
        self.git("branch", tag)
        self.assertEqual(self.script("tag_exists.sh", tag).stdout.strip(), "false")
        result = self.script("push_tag.sh", tag)
        self.assertEqual(result.returncode, 0, result.stderr)

    def test_invalid_versions_do_not_create_tags(self):
        for tag in ["java/protobuf/main", "v0.85.0", "go/module/v0.85.0-alpha..1"]:
            with self.subTest(tag=tag):
                self.assertNotEqual(self.script("push_tag.sh", tag).returncode, 0)
        self.assertEqual(self.git("tag", "--list"), "")


if __name__ == "__main__":
    unittest.main()
