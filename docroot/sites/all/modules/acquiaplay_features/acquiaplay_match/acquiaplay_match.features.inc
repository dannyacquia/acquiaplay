<?php
/**
 * @file
 * acquiaplay_match.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acquiaplay_match_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function acquiaplay_match_node_info() {
  $items = array(
    'match' => array(
      'name' => t('Match'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
