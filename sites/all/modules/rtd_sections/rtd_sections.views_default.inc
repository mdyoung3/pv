<?php
/**
 * @file
 * rtd_sections.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rtd_sections_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Section Layout */
  $handler->display->display_options['fields']['field_section_layout']['id'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['table'] = 'field_data_field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['field'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['label'] = 'Layout';
  /* Field: Content: Section Background Type */
  $handler->display->display_options['fields']['field_section_type']['id'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['table'] = 'field_data_field_section_type';
  $handler->display->display_options['fields']['field_section_type']['field'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['label'] = 'Section Type';
  /* Field: Content: Section Background Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Section Options */
  $handler->display->display_options['fields']['field_section_options']['id'] = 'field_section_options';
  $handler->display->display_options['fields']['field_section_options']['table'] = 'field_data_field_section_options';
  $handler->display->display_options['fields']['field_section_options']['field'] = 'field_section_options';
  $handler->display->display_options['fields']['field_section_options']['delta_offset'] = '0';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'sections:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Page (field_page) */
  $handler->display->display_options['arguments']['field_page_target_id']['id'] = 'field_page_target_id';
  $handler->display->display_options['arguments']['field_page_target_id']['table'] = 'field_data_field_page';
  $handler->display->display_options['arguments']['field_page_target_id']['field'] = 'field_page_target_id';
  $handler->display->display_options['arguments']['field_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_target_id']['exception']['value'] = '';
  $handler->display->display_options['arguments']['field_page_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_page_target_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'section' => 'section',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Page (field_page) */
  $handler->display->display_options['arguments']['field_page_target_id']['id'] = 'field_page_target_id';
  $handler->display->display_options['arguments']['field_page_target_id']['table'] = 'field_data_field_page';
  $handler->display->display_options['arguments']['field_page_target_id']['field'] = 'field_page_target_id';
  $handler->display->display_options['arguments']['field_page_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_page_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php 
$fs_refer= $_SERVER [\'REQUEST_URI\'];
$fs_refer = explode("editor/", $fs_refer);
$page = $fs_refer[1];
?>
<div style="margin:20px">
<a href="/editor/<?php echo $page; ?>/sort?destination=editor/<?php echo $page; ?>" class="btn btn-warning pull-right">Sort Sections</a> 
<a href="/node/add/section?destination=editor/<?php echo $page; ?>& field_page=<?php echo $page; ?>" class="btn btn-warning pull-right">Add Content</a> 
<a href="/node/<?php echo $page; ?>" class="btn btn-warning">View Page</a> 
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Section Layout */
  $handler->display->display_options['fields']['field_section_layout']['id'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['table'] = 'field_data_field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['field'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['label'] = 'Layout';
  /* Field: Content: Section Background Type */
  $handler->display->display_options['fields']['field_section_type']['id'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['table'] = 'field_data_field_section_type';
  $handler->display->display_options['fields']['field_section_type']['field'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['label'] = 'Section Type';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  $handler->display->display_options['path'] = 'editor/%';

  /* Display: Sort */
  $handler = $view->new_display('page', 'Sort', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Section Layout */
  $handler->display->display_options['fields']['field_section_layout']['id'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['table'] = 'field_data_field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['field'] = 'field_section_layout';
  $handler->display->display_options['fields']['field_section_layout']['label'] = 'Layout';
  /* Field: Content: Section Background Type */
  $handler->display->display_options['fields']['field_section_type']['id'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['table'] = 'field_data_field_section_type';
  $handler->display->display_options['fields']['field_section_type']['field'] = 'field_section_type';
  $handler->display->display_options['fields']['field_section_type']['label'] = 'Section Type';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Sort';
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  $handler->display->display_options['path'] = 'editor/%/sort';
  $export['sections'] = $view;

  return $export;
}
