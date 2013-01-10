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
 * Implements hook_field_group_info().
 */
function wfdm_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_docx|node|wfdm_project|form';
  $field_group->group_name = 'group_docx';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Word Documents',
    'weight' => '12',
    'children' => array(
      0 => 'wfdm_project_docx',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_docx|node|wfdm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|wfdm_project|default';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '14',
    'children' => array(
      0 => 'wfdm_project_isbn',
      1 => 'wfdm_project_creator',
      2 => 'wfdm_project_publisher',
      3 => 'wfdm_project_subject',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_metadata|node|wfdm_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|wfdm_project|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'wfdm_project_isbn',
      1 => 'wfdm_project_creator',
      2 => 'wfdm_project_publisher',
      3 => 'wfdm_project_subject',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_metadata|node|wfdm_project|form'] = $field_group;

  return $export;
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
