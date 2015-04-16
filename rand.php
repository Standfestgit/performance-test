<?php

echo 'Performance test from PHP...';

for ($i = 0; $i < 100000000; $i++) {
 $a = mt_rand(1,9);
}

?>
