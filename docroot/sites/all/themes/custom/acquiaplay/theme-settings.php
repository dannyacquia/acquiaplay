<?php

function acquiaplay_form_system_theme_settings_alter(&$form, &$form_state) {

    $form['acquiaplay'] = array(
        '#type' => 'fieldset',
        '#prefix' => '<h2><small>' . t('Acquia Play Settings') . '</small></h2>',
        '#weight' => -10,
    );

    $form['acquiaplay']['welcome']['intro'] = array(
        '#markup' => t('You can change the welcome info on the front page here.'),
    );

    $form['acquiaplay']['welcome']['info1'] = array(
        '#type' => 'fieldset',
        '#title' => t('Message 1'),
    );

    $form['acquiaplay']['welcome']['info1']['info1_title'] = array(
        '#type' => 'textfield',
        '#title' => t('Title'),
        '#default_value' => theme_get_setting('info1_title','acquiaplay'),
    );

    $form['acquiaplay']['welcome']['info1']['info1_content'] = array(
        '#type' => 'textarea',
        '#title' => t('Content'),
        '#default_value' => theme_get_setting('info1_content','acquiaplay'),
    );

    $form['acquiaplay']['welcome']['info2'] = array(
        '#type' => 'fieldset',
        '#title' => t('Message 2'),
    );

    $form['acquiaplay']['welcome']['info2']['info2_title'] = array(
        '#type' => 'textfield',
        '#title' => t('Title'),
        '#default_value' => theme_get_setting('info2_title','acquiaplay'),
    );

    $form['acquiaplay']['welcome']['info2']['info2_content'] = array(
        '#type' => 'textarea',
        '#title' => t('Content'),
        '#default_value' => theme_get_setting('info2_content','acquiaplay'),
    );

    $form['acquiaplay']['welcome']['info3'] = array(
        '#type' => 'fieldset',
        '#title' => t('Message 3'),
    );

    $form['acquiaplay']['welcome']['info3']['info3_title'] = array(
        '#type' => 'textfield',
        '#title' => t('Title'),
        '#default_value' => theme_get_setting('info3_title','acquiaplay'),
    );

    $form['acquiaplay']['welcome']['info3']['info3_content'] = array(
        '#type' => 'textarea',
        '#title' => t('Content'),
        '#default_value' => theme_get_setting('info3_content','acquiaplay'),
    );
}
