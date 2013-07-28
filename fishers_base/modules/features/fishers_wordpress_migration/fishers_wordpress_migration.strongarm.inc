<?php
/**
 * @file
 * fishers_wordpress_migration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fishers_wordpress_migration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/default/files/private';
  $export['file_private_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_attachment_field';
  $strongarm->value = '';
  $export['wordpress_migrate_attachment_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_category_vocabulary';
  $strongarm->value = 'blog_categories';
  $export['wordpress_migrate_category_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_create_new_users';
  $strongarm->value = '1';
  $export['wordpress_migrate_create_new_users'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_default_author_uid';
  $strongarm->value = '1';
  $export['wordpress_migrate_default_author_uid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_generate_redirects';
  $strongarm->value = 0;
  $export['wordpress_migrate_generate_redirects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_page_type';
  $strongarm->value = 'page';
  $export['wordpress_migrate_page_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_path_action';
  $strongarm->value = 2;
  $export['wordpress_migrate_path_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_podcast_field';
  $strongarm->value = '';
  $export['wordpress_migrate_podcast_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_post_type';
  $strongarm->value = 'blog_post';
  $export['wordpress_migrate_post_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_tag_vocabulary';
  $strongarm->value = '';
  $export['wordpress_migrate_tag_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_text_format';
  $strongarm->value = 'full_html';
  $export['wordpress_migrate_text_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'wordpress_migrate_text_format_comment';
  $strongarm->value = 'filtered_html';
  $export['wordpress_migrate_text_format_comment'] = $strongarm;

  return $export;
}
