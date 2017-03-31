<?php
/**
 * @file
 * rtd_sections.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rtd_sections_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rtd_sections_node_info() {
  $items = array(
    'section' => array(
      'name' => t('Section'),
      'base' => 'node_content',
      'description' => t('Section for displaying page content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
