<?php
	$sideBarLinks = array(
		"https://gssoc.tech/" => "GSSoC",
		"https://girlscript.tech/" => "GirlScript",
		"https://www.google.com/" => "Google"
	);
?>
<div class="col-2">
	<div class="list-group">
<?php foreach ($sideBarLinks as $link => $text) {?>
		<a href="<?php echo $link; ?>" target="_blank" class="list-group-item list-group-item-action"><?php echo $text; ?></a>
<?php } ?>
	</div>
</div>