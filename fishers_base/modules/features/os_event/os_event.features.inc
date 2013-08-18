<?php
/**
 * @file
 * os_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os_event_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os_event_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Goal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'reward' => array(
      'name' => t('Reward'),
      'base' => 'node_content',
      'description' => t('A reward for achieving a goal\'s result.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('A task pushes you toward a goal.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}