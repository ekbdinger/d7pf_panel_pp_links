<?php
/**
 * @file
 * d7pf_panel_pp_links.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function d7pf_panel_pp_links_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'clone_of_pp_121';
  $layout->admin_title = 'PP_links';
  $layout->admin_description = 'Trying to just have Description and Primary Info.  Everythign else will be links in between description and Primary Info';
  $layout->category = 'PP';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 4,
          1 => 1,
          2 => 'main-row',
          3 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Primary Info',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 3,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 9,
        ),
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'pp_top',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 7,
        ),
        'parent' => 'main',
        'class' => '',
      ),
      7 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'children' => array(),
        'class' => '',
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'option1',
          1 => 'setup',
          2 => 'option3',
          3 => 'option4',
        ),
        'parent' => '3',
        'class' => '',
      ),
      'pp_top' => array(
        'type' => 'region',
        'title' => 'pp_top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'setup' => array(
        'type' => 'region',
        'title' => 'Option2',
        'width' => '24.91691425612809',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'option1' => array(
        'type' => 'region',
        'title' => 'Option1',
        'width' => '25.67447452548749',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'option3' => array(
        'type' => 'region',
        'title' => 'Option3',
        'width' => '25.57304266236955',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
      'option4' => array(
        'type' => 'region',
        'title' => 'Option4',
        'width' => '23.835568556014866',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
      ),
    ),
  );
  $export['clone_of_pp_121'] = $layout;

  return $export;
}
