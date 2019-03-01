<?php
function saySomething()
{
    echo 'hi!';
    return true;
}

if (0 > -1 && saySomething())
{
    echo 'statement evaluated to true';
}
?>


<?php
	function eval(){
		echo "evaluated";
		return true;
	}

	$num = 0;
	if (($num < 1  && eval())
		echo "true\n";
	else
		echo "false\n";
	if( $num == 1 || $num == 0)
		echo "true\n";
	else
		echo "false\n";
?>
