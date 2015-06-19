<?php
/**
 * @file
 * acquiaplay_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function acquiaplay_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'acquiaplay_foosball_leaderboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Foosball Leaderboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Foosball Leaderboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="btn btn-success button-post-match" href="node/add/match" role="button">Post match results</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Foosball Wins */
  $handler->display->display_options['fields']['field_foosball_wins']['id'] = 'field_foosball_wins';
  $handler->display->display_options['fields']['field_foosball_wins']['table'] = 'field_data_field_foosball_wins';
  $handler->display->display_options['fields']['field_foosball_wins']['field'] = 'field_foosball_wins';
  $handler->display->display_options['fields']['field_foosball_wins']['label'] = 'Wins';
  $handler->display->display_options['fields']['field_foosball_wins']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: User: Foosball Losses */
  $handler->display->display_options['fields']['field_foosball_losses']['id'] = 'field_foosball_losses';
  $handler->display->display_options['fields']['field_foosball_losses']['table'] = 'field_data_field_foosball_losses';
  $handler->display->display_options['fields']['field_foosball_losses']['field'] = 'field_foosball_losses';
  $handler->display->display_options['fields']['field_foosball_losses']['label'] = 'Losses';
  $handler->display->display_options['fields']['field_foosball_losses']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: User: Foosball Rating */
  $handler->display->display_options['fields']['field_foosball_rating']['id'] = 'field_foosball_rating';
  $handler->display->display_options['fields']['field_foosball_rating']['table'] = 'field_data_field_foosball_rating';
  $handler->display->display_options['fields']['field_foosball_rating']['field'] = 'field_foosball_rating';
  $handler->display->display_options['fields']['field_foosball_rating']['label'] = 'Rating';
  $handler->display->display_options['fields']['field_foosball_rating']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: User: Foosball Rating (field_foosball_rating) */
  $handler->display->display_options['sorts']['field_foosball_rating_value']['id'] = 'field_foosball_rating_value';
  $handler->display->display_options['sorts']['field_foosball_rating_value']['table'] = 'field_data_field_foosball_rating';
  $handler->display->display_options['sorts']['field_foosball_rating_value']['field'] = 'field_foosball_rating_value';
  $handler->display->display_options['sorts']['field_foosball_rating_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_foosball_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_foosball_rating_value']['expose']['label'] = 'Rating';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: User: Foosball Wins (field_foosball_wins) */
  $handler->display->display_options['filters']['field_foosball_wins_value']['id'] = 'field_foosball_wins_value';
  $handler->display->display_options['filters']['field_foosball_wins_value']['table'] = 'field_data_field_foosball_wins';
  $handler->display->display_options['filters']['field_foosball_wins_value']['field'] = 'field_foosball_wins_value';
  $handler->display->display_options['filters']['field_foosball_wins_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_foosball_wins_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_foosball_wins_value']['group'] = 1;
  /* Filter criterion: User: Foosball Losses (field_foosball_losses) */
  $handler->display->display_options['filters']['field_foosball_losses_value']['id'] = 'field_foosball_losses_value';
  $handler->display->display_options['filters']['field_foosball_losses_value']['table'] = 'field_data_field_foosball_losses';
  $handler->display->display_options['filters']['field_foosball_losses_value']['field'] = 'field_foosball_losses_value';
  $handler->display->display_options['filters']['field_foosball_losses_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_foosball_losses_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_foosball_losses_value']['group'] = 1;
  /* Filter criterion: User: Department (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['group'] = 2;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['group_info']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_value']['group_info']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'BETA',
      'operator' => '=',
      'value' => 'BETA',
    ),
    2 => array(
      'title' => 'Sales',
      'operator' => '=',
      'value' => 'Sales',
    ),
    3 => array(
      'title' => 'AcquiaU',
      'operator' => '=',
      'value' => 'AcquiaU',
    ),
    5 => array(
      'title' => 'Support',
      'operator' => '=',
      'value' => 'Support',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'foosball-leaderboard';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Foosball Leaderboard';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['acquiaplay_foosball_leaderboard'] = $view;

  $view = new view();
  $view->name = 'acquiaplay_ping_pong_leaderboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Ping Pong Leaderboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ping Pong Leaderboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a class="btn btn-success button-post-match" href="node/add/match" role="button">Post match results</a>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Ping Pong Wins */
  $handler->display->display_options['fields']['field_wins']['id'] = 'field_wins';
  $handler->display->display_options['fields']['field_wins']['table'] = 'field_data_field_wins';
  $handler->display->display_options['fields']['field_wins']['field'] = 'field_wins';
  $handler->display->display_options['fields']['field_wins']['label'] = 'Wins';
  $handler->display->display_options['fields']['field_wins']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: User: Ping Pong Losses */
  $handler->display->display_options['fields']['field_losses']['id'] = 'field_losses';
  $handler->display->display_options['fields']['field_losses']['table'] = 'field_data_field_losses';
  $handler->display->display_options['fields']['field_losses']['field'] = 'field_losses';
  $handler->display->display_options['fields']['field_losses']['label'] = 'Losses';
  $handler->display->display_options['fields']['field_losses']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: User: Ping Pong Rating */
  $handler->display->display_options['fields']['field_ping_pong_rating']['id'] = 'field_ping_pong_rating';
  $handler->display->display_options['fields']['field_ping_pong_rating']['table'] = 'field_data_field_ping_pong_rating';
  $handler->display->display_options['fields']['field_ping_pong_rating']['field'] = 'field_ping_pong_rating';
  $handler->display->display_options['fields']['field_ping_pong_rating']['label'] = 'Rating';
  $handler->display->display_options['fields']['field_ping_pong_rating']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: User: Ping Pong Rating (field_ping_pong_rating) */
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['id'] = 'field_ping_pong_rating_value';
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['table'] = 'field_data_field_ping_pong_rating';
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['field'] = 'field_ping_pong_rating_value';
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_ping_pong_rating_value']['expose']['label'] = 'Rating';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: User: Ping Pong Wins (field_wins) */
  $handler->display->display_options['filters']['field_wins_value']['id'] = 'field_wins_value';
  $handler->display->display_options['filters']['field_wins_value']['table'] = 'field_data_field_wins';
  $handler->display->display_options['filters']['field_wins_value']['field'] = 'field_wins_value';
  $handler->display->display_options['filters']['field_wins_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_wins_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_wins_value']['group'] = 1;
  /* Filter criterion: User: Ping Pong Losses (field_losses) */
  $handler->display->display_options['filters']['field_losses_value']['id'] = 'field_losses_value';
  $handler->display->display_options['filters']['field_losses_value']['table'] = 'field_data_field_losses';
  $handler->display->display_options['filters']['field_losses_value']['field'] = 'field_losses_value';
  $handler->display->display_options['filters']['field_losses_value']['operator'] = '!=';
  $handler->display->display_options['filters']['field_losses_value']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_losses_value']['group'] = 1;
  /* Filter criterion: User: Department (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['group'] = 2;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Department (field_department)';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['group_info']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_value']['group_info']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'BETA',
      'operator' => '=',
      'value' => 'BETA',
    ),
    2 => array(
      'title' => 'AcquiaU',
      'operator' => '=',
      'value' => 'AcquiaU',
    ),
    3 => array(
      'title' => 'Support',
      'operator' => '=',
      'value' => 'Support',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ping-pong-leaderboard';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ping Pong Leaderboard';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['acquiaplay_ping_pong_leaderboard'] = $view;

  $view = new view();
  $view->name = 'acquiaplay_recent_matches';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Recent Matches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Matches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Game Type */
  $handler->display->display_options['fields']['field_game_type']['id'] = 'field_game_type';
  $handler->display->display_options['fields']['field_game_type']['table'] = 'field_data_field_game_type';
  $handler->display->display_options['fields']['field_game_type']['field'] = 'field_game_type';
  $handler->display->display_options['fields']['field_game_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Team One Score */
  $handler->display->display_options['fields']['field_player1_score']['id'] = 'field_player1_score';
  $handler->display->display_options['fields']['field_player1_score']['table'] = 'field_data_field_player1_score';
  $handler->display->display_options['fields']['field_player1_score']['field'] = 'field_player1_score';
  $handler->display->display_options['fields']['field_player1_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Team Two Score */
  $handler->display->display_options['fields']['field_player2_score']['id'] = 'field_player2_score';
  $handler->display->display_options['fields']['field_player2_score']['table'] = 'field_data_field_player2_score';
  $handler->display->display_options['fields']['field_player2_score']['field'] = 'field_player2_score';
  $handler->display->display_options['fields']['field_player2_score']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'match' => 'match',
  );
  /* Filter criterion: Content: Game Type (field_game_type) */
  $handler->display->display_options['filters']['field_game_type_tid']['id'] = 'field_game_type_tid';
  $handler->display->display_options['filters']['field_game_type_tid']['table'] = 'field_data_field_game_type';
  $handler->display->display_options['filters']['field_game_type_tid']['field'] = 'field_game_type_tid';
  $handler->display->display_options['filters']['field_game_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_game_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_type_tid']['expose']['operator_id'] = 'field_game_type_tid_op';
  $handler->display->display_options['filters']['field_game_type_tid']['expose']['label'] = 'Game Type';
  $handler->display->display_options['filters']['field_game_type_tid']['expose']['operator'] = 'field_game_type_tid_op';
  $handler->display->display_options['filters']['field_game_type_tid']['expose']['identifier'] = 'field_game_type_tid';
  $handler->display->display_options['filters']['field_game_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_game_type_tid']['group_info']['label'] = 'Game Type (field_game_type)';
  $handler->display->display_options['filters']['field_game_type_tid']['group_info']['identifier'] = 'field_game_type_tid';
  $handler->display->display_options['filters']['field_game_type_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_game_type_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_game_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_game_type_tid']['vocabulary'] = 'type_of_game';
  $handler->display->display_options['filters']['field_game_type_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'recent-matches';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Recent Matches';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['acquiaplay_recent_matches'] = $view;

  return $export;
}
