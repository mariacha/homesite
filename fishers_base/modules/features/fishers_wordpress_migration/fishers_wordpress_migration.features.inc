<?php
/**
 * @file
 * fishers_wordpress_migration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fishers_wordpress_migration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
