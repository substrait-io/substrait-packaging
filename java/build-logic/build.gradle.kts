plugins { `kotlin-dsl` }

repositories { gradlePluginPortal() }

dependencies {
  // Make the nmcp plugin available to the convention plugin, which applies it by id.
  implementation(libs.nmcp.gradlePlugin)
}

