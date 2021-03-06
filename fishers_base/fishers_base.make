; This is the actual project make file that should be edited for a
; given project. This text should be replaced with a brief description
; of the project.
api = 2

; Set contrib directory.
defaults[projects][subdir] = "contrib"

core = "7.x"
projects[drupal][type] = "core"
projects[drupal][version] = "7.32"
; Make taxonomy permissions use vocabulary machine name instead of vid
projects[drupal][patch][] = "http://drupal.org/files/995156-31_portable_taxonomy_permissions-D7-15.patch"
; Ensure plain text fields evaluate line breaks.
projects[drupal][patch][] = "http://drupal.org/files/text-plain-1152216-24.patch"

; Base installation profile
includes[base] = "base.make"

; Image handling. Comment this out if you don't need any image handling.
includes[images] = "images.make"

; Uncomment this to enable demo content. Do not use on production.
;includes[demo] = "demo.make"

; Uncomment to use Panels.
includes[panels] = "panels.make"

; Uncomment to use Solr Search.
; includes[solr] = "solr.make"

; Libraries.
projects[libraries][version] = "2.1"

; Libraries

; Profiler
libraries[profiler][download][type] = "git"
libraries[profiler][download][branch] = "7.x-2.x"
libraries[profiler][download][revision] = "4c131d2"
; http://drupal.org/node/1853290#comment-6787544: Add support for term parents.
libraries[profiler][patch][] = "http://drupal.org/files/1853290-support-term-parent-2.patch"
; http://drupal.org/node/1921880#comment-7086568: Add support for heirarchical menus on node creation.
libraries[profiler][patch][] = "http://drupal.org/files/profiler_heirarchical_node_menu-1921880-1.patch"

; swfobject, JS library for embedding Flash content
;libraries[swfobject][download][type] = "get"
;libraries[swfobject][download][url] = "http://swfobject.googlecode.com/files/swfobject_2_2.zip"
;libraries[swfobject][destination] = "libraries"
;libraries[swfobject][directory_name] = "swfobject"

; Magnific Popup
libraries[magnific-popup][download][type] = "git"
libraries[magnific-popup][download][url] = "https://github.com/dimsemenov/Magnific-Popup.git"
libraries[magnific-popup][destination] = "libraries"
libraries[magnific-popup][directory_name] = "magnific-popup"


; Project-specific modules, and overrides.

; Feeds
projects[feeds][version] = "2.0-alpha8"

; Feeds Files
projects[feeds_files][version] = "1.x-dev"

; Jquery Update
projects[jquery_update][version] = "2.3"

; Job Scheduler
projects[job_scheduler][version] = "2.0-alpha3"

; Media gallery
projects[media_gallery][version] = "2.x-dev"

; Wordpress migrate
projects[wordpress_migrate][version] = "2.2"

; Wordpress migrate
projects[migrate][version] = "2.5"

;
; OS events
;

; Context
projects[context][version] = "3.1"

; Context admin
projects[context_admin][version] = "1.2"

; Date
projects[date][version] = "2.8"

; Entity
projects[entity][version] = "1.5"

; Entity Reference
projects[entityreference][version] = "1.1"

; Entity Reference prepopulate
projects[entityreference_prepopulate][version] = "1.3"

; Views bulk operations
projects[views_bulk_operations][version] = "3.1"

;
; Theme
;
projects[adaptivetheme][version] = "3.1"
; Going to try to mimic this sort of thing:
; http://themeforest.net/theme_previews/4553346-responsive-portfolio-personal-vcard-js?index=5
projects[sky][version] = "3.0-rc1"