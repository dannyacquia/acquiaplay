<?php

/**
 * @file
 * template.php
 */

function bootstrap_sportsratingsacquia_preprocess_page(&$variables, $hook) {

  // Remove front page welcome message
  if (drupal_is_front_page()) { $variables['title']=""; }

}

function bootstrap_sportsratingsacquia_preprocess_views_view_table(&$vars)
{
    $vars['classes_array'][] = 'table table-striped';
}
