<div class="welcome">
  <div class="row">
    <div class="col-lg-12">
      <div class="well text-center">
        <strong>Welcome to <?php print variable_get('site_name') ?> - <?php print variable_get('site_slogan'); ?></strong>
      </div>
    </div>
  </div>

  <div class="row col-md-10 col-md-offset-1">
    <?php
      $info[0]['#title'] = check_plain(theme_get_setting('info1_title', 'bootstrap_sportsratingsacquia'));
      $info[0]['#content'] = check_plain(theme_get_setting('info1_content', 'bootstrap_sportsratingsacquia'));
      $info[1]['#title'] = check_plain(theme_get_setting('info2_title', 'bootstrap_sportsratingsacquia'));
      $info[1]['#content'] = check_plain(theme_get_setting('info2_content', 'bootstrap_sportsratingsacquia'));
      $info[2]['#title'] = check_plain(theme_get_setting('info3_title', 'bootstrap_sportsratingsacquia'));
      $info[2]['#content'] = check_plain(theme_get_setting('info3_content', 'bootstrap_sportsratingsacquia'));
    ?>
    <?php foreach($info as $message): ?>
      <div class="col-md-4">
      <h2 class="text-center"><?php print $message['#title'] ?></h2>
        <p><?php print $message['#content']; ?></p>
      </div>
    <?php endforeach; ?>
  </div>
</div>
