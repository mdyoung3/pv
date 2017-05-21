<?php
/**
 * @file
 * feature_slider.features.inc
 */

/**
 * Implements hook_node_info().
 */
function feature_slider_node_info() {
  $items = array(
    'slider' => array(
      'name' => t('slider'),
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
