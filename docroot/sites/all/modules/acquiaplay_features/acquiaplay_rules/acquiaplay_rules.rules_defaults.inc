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
