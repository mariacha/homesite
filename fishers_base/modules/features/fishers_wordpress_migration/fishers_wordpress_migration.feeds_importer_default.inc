<?php
/**
 * @file
 * fishers_wordpress_migration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function fishers_wordpress_migration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'nextgen_gallery';
  $feeds_importer->config = array(
    'name' => 'Nextgen gallery',
    'description' => 'An importer to add the nextgen gallery',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'galdesc',
            'target' => 'media_gallery_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'gid',
            'target' => 'field_nextgen_gid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'path',
            'target' => 'field_nextgen_path',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'media_gallery',
      ),
    ),
    'content_type' => 'media_gallery',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['nextgen_gallery'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'nextgen_images';
  $feeds_importer->config = array(
    'name' => 'Nextgen Images',
    'description' => 'The images in the nextgen galleries',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFileProcessor',
      'config' => array(
        'bundle' => 'image',
        'author' => '1',
        'authorize' => 1,
        'debug' => array(
          'newEntity' => 0,
          'entityLoad' => 0,
          'entitySave' => 0,
          'setTargetElement' => 0,
          'existingEntityId' => 0,
        ),
        'mappings' => array(
          0 => array(
            'source' => 'alttext',
            'target' => 'field_file_image_alt_text',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'filename',
            'target' => 'filename',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'media_description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'fullpath',
            'target' => 'uri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'galleryid',
            'target' => 'field_nextgen_path',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'pid',
            'target' => 'field_nextgen_id',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => NULL,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['nextgen_images'] = $feeds_importer;

  return $export;
}
