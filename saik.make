api = 2
core = 7.x

; --- NodeStream ---
projects[ns_core][type] = module
projects[ns_core][version] = 2.x-dev
projects[ns_core][subdir] = contrib



; --- Theme ---

projects[fontfolio][type] = theme
projects[fontfolio][version] = 2.3
projects[fontfolio][subdir] = contrib



; --- Modules ---

; We need the dev version to add options to choose jQuery 1.8.
projects[jquery_update][type] = module
projects[jquery_update][version] = 2.x-dev
projects[jquery_update][download][type] = git
projects[jquery_update][download][revision] = baff5d1
projects[jquery_update][subdir] = contrib



; --- Patches ---

; http://drupal.org/node/1904548
projects[ns_core][patch][1904548] = http://drupal.org/files/ns-core-update-ckeditor-1904548-5.patch

; http://drupal.org/node/1847900
projects[jquery_update][patch][1847900] = http://drupal.org/files/jquery_update-ui_update-1847900.patch