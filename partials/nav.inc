<?php
	$links = array(
		"index.php" => "Home",
		"about.php" => "About Us",
		"projects.php" => "Projects",
		"gssoc.php" => "GSSoC",
		"contact.php" => "Contact Us"
	);
?>
		<nav class="navbar navbar-expand-lg navbar-dark bg-dark mb-4">
			<a class="navbar-brand" href="index.php">GSSoC Logo</a>
			<button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
				<span class="navbar-toggler-icon"></span>
			</button>
			<div class="collapse navbar-collapse ml-auto" id="navbarNav">
				<ul class="navbar-nav">
<?php foreach ($links as $link => $text) { ?>
					<li class="nav-item<?php echo ($page == "$link") ? ' active' : ""; ?>">
						<a class="nav-link" href="<?php echo $link; ?>"><?php echo $text; ?></a>
					</li>

<?php } ?>
				</ul>
			</div>
		</nav>
