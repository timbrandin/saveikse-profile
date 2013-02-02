api = 2
core = 7.x

projects[ns_core][type] = module
projects[ns_core][version] = 2.x-dev
projects[ns_core][subdir] = contrib

; Make Wysiwyg use ckeditor 4.x
; http://drupal.org/node/1904548
projects[ns_core][patch][1904548] = http://drupal.org/files/ns-core-update-ckeditor-1904548-5.patch
