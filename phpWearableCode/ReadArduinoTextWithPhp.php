<?php

if (isset( $_POST['username']) && isset($_POST['password']) )  {
	$username = $_POST['username'];
	$password = $_POST['password'];
}
else {
	$bankFile = fopen("bank.txt", "r") or die("Unable to open file!");
	$username = fgets($bankFile);
	$password = fgets($bankFile);
	$username = trim($username);
	$password = trim($password);
}


$user1 = 'sfhmmy';
$pass1 = 'sfhmmy';

$loginSuccess =  ($username === $user1) && ($password  === $pass1);


if ($loginSuccess) {
	if (isset($bankFile)) {
		echo 'success';
	}
	else {
		include 'success.html';
	}
}
else {
	if (!isset($bankFile)) {
		header("Location: index.html?error=1");
	}
} 
?>

