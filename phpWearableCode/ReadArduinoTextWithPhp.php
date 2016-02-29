<?php
$username = $_POST['username'];
$password = $_POST['password'];

$user1 = 'sfhmmy';
$pass1 = 'sfhmmy';

$loginSuccess =  ($username == $user1) && ($password  == $pass1);

if ($loginSuccess) {
	include 'success.html';
}
else {
	header("Location: index.html?error=1");
}
?>

