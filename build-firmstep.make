api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = "7.7"
projects[drupal][patch][] = http://drupal.org/files/issues/object_conversion_menu_router_build-972536-1.patch
projects[drupal][patch][] = http://drupal.org/files/issues/992540-3-reset_flood_limit_on_password_reset-drush.patch

projects[firmstep][type] = profile
projects[firmstep][download][type] = git
projects[firmstep][download][url] =git@github.com:firmstepgit/firmstep.git
