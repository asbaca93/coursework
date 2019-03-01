<!DOCTYPE html>
<html>

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
                    <li role="presentation"><a href="bulkload_ab.php">Bulkloading </a></li>
                    <li role="presentation"><a href="Data.php">Data Managment </a></li>
                    <li role="presentation"><a href="#">About </a></li>
                </ul>
            </div>
        </div>
    </nav>
    <div id="promo">
        <div class="jumbotron">
            <h1>Group 1</h1>
            <p>Submitted by Andrew Baca, Shane Grayson and Ian Navarro.</p>
            <p><a class="btn btn-info btn-lg" role="button" href="#" style="background-color:#56237d;">Surprise! </a></p>
        </div>
    </div>
    <div class="container site-section" id="welcome">
        <h1>CS482-Project:Phase 2 </h1>
        <p>Implement two different ways of inserting data: bulk-loading and single insertion.Implement an option to delete all data from a particular table. </p>
    </div>
    <div class="dark-section">
        <div class="container site-section" id="feature">
            <h1>Features </h1>
            <div class="row">
                <div class="col-md-4 item"><i class="glyphicon glyphicon-duplicate"></i>
                    <h2>SQL-Query </h2>
                    <p>Text to query the tables (and the database) that was created in Phase1</p>
                </div>
                <div class="col-md-4 item"><i class="glyphicon glyphicon-download-alt"></i>
                    <h2>Bulkloading </h2>
                    <p>Users should be able to insert a text file that contains data for the corresponding table.</p>
                </div>
                <div class="col-md-4 item"><i class="glyphicon glyphicon-folder-open"></i>
                    <h2>Data Management</h2>
                    <p>User should be able to insert data by single insertion or bulkloading. Implement delete all data from a table.</p>
                </div>
            </div>
        </div>
    </div>
    <script src="assets/js/jquery.min.js"></script>
    <script src="assets/bootstrap/js/bootstrap.min.js"></script>
</body>

</html>
