// SPDX-License-Identifier: Apache-2.0

// Confirms the vendored Substrait extension data is present and locatable under
// the data directory exposed by the package.
#include <filesystem>

int main() {
  const std::filesystem::path dataDir{SUBSTRAIT_EXTENSIONS_DATA_DIR};

  // A handful of files that must exist in every spec release.
  const std::filesystem::path mustExist[] = {
      dataDir / "extensions" / "functions_arithmetic.yaml",
      dataDir / "text" / "simple_extensions_schema.yaml",
      dataDir / "tests" / "cases",
  };

  for (const auto& p : mustExist) {
    if (!std::filesystem::exists(p)) {
      return 1;
    }
  }
  return 0;
}
