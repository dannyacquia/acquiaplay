<div class="welcome">
  <div class="row">
    <div class="col-lg-12">
      <div class="well text-center">
        <strong>Welcome to <?php print variable_get('site_name') ?> - <?php print variable_get('site_slogan'); ?></strong>
      </div>
    </div>
  </div>

  <div class="row col-md-10 col-md-offset-1">
    <?php foreach($welcome_how_to as $header => $text): ?>
      <div class="col-md-4">
      <h2 class="text-center"><?php print $header ?></h2>
        <p><?php print $text; ?></p>
      </div>
    <?php endforeach; ?>
  </div>
</div>
