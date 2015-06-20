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

/**
 * Process variables for user-profile.tpl.php.
 *
 * The $variables array contains the following arguments:
 * - $account
 *
 * @see user-profile.tpl.php
 */
function bootstrap_sportsratingsacquia_preprocess_user_profile(&$variables) {
    $account = $variables['elements']['#account'];

    foreach (element_children($variables['elements']) as $key) {
        $variables['user_profile'][$key] = $variables['elements'][$key];
    }
    //Add mail to $user_profile variable
    $variables['user_profile']['mail'] = $account->mail;
    // Preprocess fields.
    field_attach_preprocess('user', $account, $variables['elements'], $variables);
}
