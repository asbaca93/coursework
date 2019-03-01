<!DOCTYPE html>
<html>
<?php include 'con.php';?>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Database</title>
    <link rel="stylesheet" href="assets/bootstrap/css/bootstrap.min.css">
    <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Raleway:400,700">
    <link rel="stylesheet" href="assets/css/Login-Form-Dark-1.css">
    <link rel="stylesheet" href="assets/css/Login-Form-Dark.css">
    <link rel="stylesheet" href="assets/css/styles.css">
</head>

<body>
    <nav class="navbar navbar-inverse navbar-fixed-top" style="color:rgb(211,21,21);background-color:rgb(248,248,248);">
        <div class="container">
            <div class="navbar-header">
                <a class="navbar-brand navbar-link" href="index.php"><img src="assets/img/LogoMakr_845vYo.png" id="logo"><strong>CS482</strong> </a>
                <button class="navbar-toggle collapsed" data-toggle="collapse" data-target="#navcol-1"><span class="sr-only">Toggle navigation</span><span class="icon-bar"></span><span class="icon-bar"></span><span class="icon-bar"></span></button>
            </div>
            <div class="collapse navbar-collapse" id="navcol-1">
                <ul class="nav navbar-nav navbar-right">
                    <li class="active" role="presentation"><a href="SQLQuery.php" style="background-color:rgb(248,248,248);">SQL-Query </a></li>
                    <li role="presentation"><a href="Bulkloading.php">Bulkloading </a></li>
                    <li role="presentation"><a href="Data.php" style="background-color:#fff0bd;">Data Management</a></li>
                    <li role="presentation"><a href="#">About </a></li>
                </ul>
            </div>
        </div>
    </nav>
    <div id="promo">
        <div class="jumbotron">
            <form method="post">
                <h2 class="sr-only">Login Form</h2>
                <div class="illustration"><i class="glyphicon glyphicon-folder-open" style="font-size:123px;color:#56237d;padding-bottom:16px;"></i></div>
                <input class="form-control" type="search" name="sqldeletion" placeholder="Insert row to be deleted" style="font-size:20px;color:#56237d;">
                <div class="form-group"></div>
                <div class="form-group"></div>

                <div class="form-group">
                    <button class="btn btn-primary" type="submit" style="background-color:#56237d;">Single Row Deletion </button>
                </div>

		<input class="form-control" type="search" name="sqltabledelete" placeholder="Insert table to be deleted" style="font-size:20px;color:#56237d;">
                <div class="form-group"></div>
                <div class="form-group"></div>
		<div class="form-group">
                    <button class="btn btn-primary" type="submit" style="background-color:#56237d;">Drop Table </button>
                </div>

            </form>
        </div>
    </div>

    <div class="container site-section" id="welcome"><h3>
<?php
include 'sql_deletion.php';
?></h3>
    </div>

    <script src="assets/js/jquery.min.js"></script>
    <script src="assets/bootstrap/js/bootstrap.min.js"></script>
</body>

</html>
