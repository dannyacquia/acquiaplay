<?php

/**
 * @file
 * template.php
 */


function bootstrap_sportsratingsacquia_theme() {
    $items = array();

    $items['user_login'] = array(
        'render element' => 'form',
        'path' => drupal_get_path('theme', 'bootstrap_sportsratingsacquia') . '/templates',
        'template' => 'user-login',
        'preprocess functions' => array(
            'bootstrap_sportsratingsacquia_preprocess_user_login'
        ),
    );

    return $items;
}

function bootstrap_sportsratingsacquia_preprocess_user_login(&$vars) {
    $vars['name'] = render($vars['form']['name']);
    $vars['pass'] = render($vars['form']['pass']);
    $vars['submit'] = render($vars['form']['actions']['submit']);
    $vars['rendered'] = drupal_render_children($vars['form']);
}

/*
 * Implements template_preprocess_page
 */
function bootstrap_sportsratingsacquia_preprocess_page(&$variables, $hook) {

    // Remove front page welcome message
    if (drupal_is_front_page()) {
        drupal_set_title("");
    }

    // Removes '.' from title and capitalizes
    // Only for user page
    $path = drupal_get_path_alias();
    if ((strpos($path, 'user') !== FALSE)) {
        $new_title = ucwords(str_replace('.', ' ', drupal_get_title()));
        drupal_set_title($new_title);
    }
}

/*
 * Implements template_preprocess_views_view_table
 *
 * Changes table to use different css classes
 */
function bootstrap_sportsratingsacquia_preprocess_views_view_table(&$vars)
{
    $vars['classes_array'][] = 'table table-striped';
}

/**
 * Implements template_preprocess_views_view_table
 *
 * Adds variables for use in user template page
 */
function bootstrap_sportsratingsacquia_preprocess_user_profile(&$variables) {
    $account = $variables['elements']['#account'];

    foreach (element_children($variables['elements']) as $key) {
        $variables['user_profile'][$key] = $variables['elements'][$key];
    }
    //Add mail and name to $user_profile variable
    $variables['user_profile']['mail'] = $account->mail;
    $variables['user_profile']['name'] = $account->name;
    // Preprocess fields.
    field_attach_preprocess('user', $account, $variables['elements'], $variables);
}

