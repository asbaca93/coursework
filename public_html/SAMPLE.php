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
                    <li class="active" role="presentation"><a href="SQLQuery.php" style="background-color:#fff0bd;">SQL-Query </a></li>
                    <li role="presentation"><a href="Bulkloading.php">Bulkloading </a></li>
                    <li role="presentation"><a href="Data.php">Data Management</a></li>
                    <li role="presentation"><a href="#">About </a></li>
                </ul>
            </div>
        </div>
    </nav>
<?php include 'con.php';?>
    <div id="promo">
        <div class="jumbotron">
            <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
                <h2 class="sr-only">Login Form</h2>
                <div class="illustration"><i class="glyphicon glyphicon-duplicate" style="font-size:123px;color:#56237d;padding-bottom:16px;"></i></div>

                <input class="form-control" type="search" name="sqlquery" placeholder="Input query here" style="font-size:20px;color:#56237d;">

                <div class="form-group"></div>
                <div class="form-group"></div>
                <div class="form-group">
                    <button class="btn btn-primary" type="submit" style="background-color:#56237d;">Submit </button>
                </div>
            </form>
        </div>
    </div>
<?php
include 'sql_connection.php';

// define variables and set to empty values
$sqlqueryErr = "";
$sqlquery = "";

if ($_SERVER["REQUEST_METHOD"] == "POST") {
  if (empty($_POST["sqlquery"])) {
    $sqlqueryErr = "Query required";
  } else {
    //$sqlquery = test_input($_POST["sqlquery"]);
    $sqlquery = $_POST["sqlquery"];
  }
}

//Not 100% sure what this does, but it stops half the queries
function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}

//quotemeta read up on this, might fix the quotation issue
//https://razorsql.com/articles/mysql_column_names_values.html
if ($res = mysqli_query($con, $sqlquery)) {

        if(mysqli_num_rows($res) > 0) {
                echo '<html><body><table><tr>';

                $i = 0;
                while ($i < mysqli_num_fields($res)) {
                        $meta = mysqli_fetch_field($res);
                        echo '<td>' . $meta->name;
                        switch ($meta->type) {
                                case 246:
                                        echo '<br>' . 'DEC '. '</td>';
                                        break;
                                case 253:
                                        echo '<br>' . 'VAR_S ' . '</td>';
                                        break;
                                case 254:
                                        echo '<br>' . 'STRING ' . '</td>';
                                        break;
                                default:
                                        echo '<br> N/A ';
                                        break;
                        }
                        $i = $i + 1;
                }

                $x = 0;
                while ($x < mysqli_num_fields($res)) {
                        $meta2 = mysqli_fetch_field($res);
                        $x = $x + 1;
                }
                echo '</tr>';

                $i = 0;
                while ($row = mysqli_fetch_row($res)) {
                        echo '<tr>';
                        $count = count($row);
                        $y = 0;
                        while ($y < $count) {
                                $c_row = current($row);
                                echo '<td>' . $c_row . '</td>';
                                next($row);
                                $y = $y + 1;
                        }//end while 2
                        echo '</tr>';
                        $i = $i + 1;
                }//end while 1

                echo '</table></body></html>';
                mysqli_free_result($res);
        }
} else {
        $message = $sqlqueryErr . mysqli_error();
        echo $message;
}

$con->close();
?>
    <script src="assets/js/jquery.min.js"></script>
    <script src="assets/bootstrap/js/bootstrap.min.js"></script>
</body>

</html>
