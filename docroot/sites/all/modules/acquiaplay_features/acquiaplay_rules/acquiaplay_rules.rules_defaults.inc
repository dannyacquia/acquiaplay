<?php
/**
 * @file
 * acquiaplay_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function acquiaplay_rules_default_rules_configuration() {
  $items = array();
  $items['rules_acquiaplay_only_allow_acquia_com_emails'] = entity_import('rules_config', '{ "rules_acquiaplay_only_allow_acquia_com_emails" : {
      "LABEL" : "Only allow acquia.com emails",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "hybridauth" ],
      "ON" : { "hybridauth_user_preinsert" : [] },
      "IF" : [
        { "NOT data_is" : { "data" : [ "hybridauth:email" ], "value" : "%@acquia.com" } }
      ],
      "DO" : [
        { "hybridauth_session_destroy" : [] },
        { "hybridauth_window_close" : [] }
      ]
    }
  }');
  $items['rules_redirect_after_match_save'] = entity_import('rules_config', '{ "rules_redirect_after_match_save" : {
      "LABEL" : "Redirect after Match save",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--match" : { "bundle" : "match" } },
      "DO" : [ { "redirect" : { "url" : "recent-matches" } } ]
    }
  }');
  return $items;
}
