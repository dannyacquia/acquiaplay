<div class="container">
  <div class="row">
    <div class="col-xs-12 col-sm-12 col-md-8 col-lg-8 toppad" >
      <div class="row">
      <div class="col-md-3 col-lg-3 " align="center"><?php print render($user_profile['user_picture']); ?></div>
          <div class=" col-md-9 col-lg-9 ">
            <table class="table table-user-information">
              <tbody>
                <tr>
                  <td>Department:</td>
                  <td><?php print render($user_profile['field_department']['#items'][0][value]); ?></td>
                </tr>
                <tr>
                  <td>Email:</td>
                  <td><?php print render($user_profile['mail']) ?></td>
                </tr>
                <tr>
                  <td><h3>Ping Pong</h3></td>
                  <td></td>
                </tr>
                <tr>
                  <td>Rating:</td>
                  <td>
                    <strong><span class="text-success">
                      <?php print $user_profile['field_ping_pong_rating']['#items'][0][value]; ?>
                    </span></strong>
                  </td>
                </tr>
                <tr>
                  <td>Wins:</td>
                  <td><?php print $user_profile['field_wins']['#items'][0][value]; ?></td>
                </tr>
                <tr>
                  <td>Losses:</td>
                  <td><?php print $user_profile['field_losses']['#items'][0][value]; ?></td>
                </tr>
                <tr>
                  <td><h3>Foosball</h3></td>
                  <td></td>
                </tr>
                <tr>
                  <td>Rating:</td>
                  <td>
                    <strong><span class="text-success">
                      <?php print $user_profile['field_foosball_rating']['#items'][0][value]; ?>
                    </span></strong>
                  </td>
                </tr>
                <tr>
                  <td>Wins:</td>
                  <td><?php print $user_profile['field_foosball_wins']['#items'][0][value]; ?></td>
                </tr>
                <tr>
                  <td>Losses:</td>
                  <td><?php print $user_profile['field_foosball_losses']['#items'][0][value]; ?></td>
                </tr>
                <tr>
              </tbody>
            </table>
          </div>
        </div>
      </div>
    </div>
  </div>
</div>
