<?php
/**
 * @file
 * wfdm.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wfdm_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:publisher
  $menu_links['navigation:publisher'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'publisher',
    'router_path' => 'publisher',
    'link_title' => 'Project List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Project List');


  return $menu_links;
}
