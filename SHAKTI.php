/*
  Game-theory
*/

<?php

$input = fopen('php://stdin', "r");

fscanf($input, "%d", $t);

while ($t--) {
	fscanf($input, "%d", $n);
	
	if ($n % 2 == 0) {
		print "Thankyou Shaktiman";
	} else {
		print "Sorry Shaktiman";
	}
	echo "\n";
}

fclose($input);

?>
