<?php
	/**
    * @file Theme include for the user menu
    */
?>
<?php
	if($user){
?>
<div class="user-control-panel">
<?php
	$user_heading =  "Hello ".l($user->name,'user/'.$user->uid);
	echo "<h2>".$user_heading."</h2>";
	$custom_secondary = array(
		array('href' => 'user','title' => 'My profile'),
		array('href' => 'user/logout','title' => 'Logout')
	);
      print theme('links__system_secondary_menu', array(
      'links' => $custom_secondary,
      'attributes' => array(
        'id' => 'secondary-menu',
        'class' => array('links', 'inline', 'clearfix'),
      )
    ));
?>
</div>
	<?php } ?>