<?php
/**
 * @file
 * azur_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function azur_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function azur_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function azur_features_node_info() {
  $items = array(
    'carousel' => array(
      'name' => t('Carousel'),
      'base' => 'node_content',
      'description' => t('This is the carousel content type it stores all the images and data for the carousel'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('This content type hold all the news items of Azur Infotech'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
