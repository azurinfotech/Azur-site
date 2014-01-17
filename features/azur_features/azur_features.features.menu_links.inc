<?php
/**
 * @file
 * azur_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function azur_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_industries:azur/industries
  $menu_links['main-menu_industries:azur/industries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'azur/industries',
    'router_path' => 'azur/industries',
    'link_title' => 'Industries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_industries:azur/industries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_services:azur/services
  $menu_links['main-menu_services:azur/services'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'azur/services',
    'router_path' => 'azur/services',
    'link_title' => 'Services',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_services:azur/services',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_workroom:azur/workroom
  $menu_links['main-menu_workroom:azur/workroom'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'azur/workroom',
    'router_path' => 'azur/workroom',
    'link_title' => 'Workroom',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_workroom:azur/workroom',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Industries');
  t('Services');
  t('Workroom');


  return $menu_links;
}
