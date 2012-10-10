<?php
/**
 * @file
 * wfdm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wfdm_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function wfdm_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function wfdm_node_info() {
  $items = array(
    'wfdm_project' => array(
      'name' => t('WFDM Project'),
      'base' => 'node_content',
      'description' => t('Use this to create a project that will be output to various formats supported by the WFDM.'),
      'has_title' => '1',
      'title_label' => t('Project Title'),
      'help' => '',
    ),
  );
  return $items;
}
