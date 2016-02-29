<!DOCTYPE html>
<html>
<body>

<?php
$myfile = fopen("text.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("text.txt"));
fclose($myfile);



$filename="text.txt";	



do {
	$size=filesize($filename);
    echo $filename . ': ' . $size . ' bytes';


} while ($size==15);



?>

</body>
</html>