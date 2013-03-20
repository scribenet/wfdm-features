<?php
/**
 * @file
 * wfdm.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wfdm_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ebook_options|node|wfdm_project|form';
  $field_group->group_name = 'group_ebook_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E-book Options',
    'weight' => '4',
    'children' => array(
      0 => 'wfdm_project_css',
      1 => 'wfdm_project_fonts',
      2 => 'wfdm_project_backlinking',
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
  $export['group_ebook_options|node|wfdm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|wfdm_project|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Files',
    'weight' => '3',
    'children' => array(
      0 => 'wfdm_project_docx',
      1 => 'wfdm_project_scml',
      2 => 'wfdm_project_image',
      3 => 'wfdm_project_indd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_files|node|wfdm_project|form'] = $field_group;

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
    'label' => 'Project Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'wfdm_project_isbn',
      1 => 'wfdm_project_creator',
      2 => 'wfdm_project_publisher',
      3 => 'wfdm_project_subject',
      4 => 'wfdm_project_isbn_epub',
      5 => 'wfdm_project_isbn_mobi',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
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
    'label' => 'Project Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'wfdm_project_isbn',
      2 => 'wfdm_project_creator',
      3 => 'wfdm_project_publisher',
      4 => 'wfdm_project_subject',
      5 => 'wfdm_project_isbn_epub',
      6 => 'wfdm_project_isbn_mobi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_metadata|node|wfdm_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_output|node|wfdm_project|form';
  $field_group->group_name = 'group_output';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'wfdm_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Output',
    'weight' => '5',
    'children' => array(
      0 => 'wfdm_project_epub2',
      1 => 'wfdm_project_epub3',
      2 => 'wfdm_project_idtt',
      3 => 'wfdm_project_mobi',
      4 => 'wfdm_project_downloads',
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
  $export['group_output|node|wfdm_project|form'] = $field_group;

  return $export;
}
