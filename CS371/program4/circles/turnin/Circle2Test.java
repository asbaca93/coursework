
/***
* Example JUnit testing class for Circle1 (and Circle)
*
* - must have your classpath set to include the JUnit jarfiles
* - to run the test do:
*     java org.junit.runner.JUnitCore Circle1Test
* - note that the commented out main is another way to run tests
* - note that normally you would not have print statements in
*   a JUnit testing class; they are here just so you see what is
*   happening. You should not have them in your test cases.
***/

import org.junit.*;

public class Circle2Test
{
   // Data you need for each test case
   private Circle2 circle1;
   private Circle2 circle2;
   private Circle2 circle3;

// 
// Stuff you want to do before each test case
//
@Before
public void setup()
{
   System.out.println("\nTest starting...");
   circle1 = new Circle2(1,2,3);
   circle2 = new Circle2(0,0,60);
   circle3 = new Circle2(50,50,3);
}

//
// Stuff you want to do after each test case
//
@After
public void teardown()
{
   System.out.println("\nTest finished.");
}

//
// Test a simple positive move
//
@Test
public void simpleMove()
{
   Point p;
   System.out.println("Running test simpleMove.");
   p = circle1.moveBy(1,1);
   Assert.assertTrue(p.x == 2 && p.y == 3);
}

// 
// Test a simple negative move
//
@Test
public void simpleMoveNeg()
{
   Point p;
   System.out.println("Running test simpleMoveNeg.");
   p = circle1.moveBy(-1,-1);
   Assert.assertTrue(p.x == 0 && p.y == 1);
}

//
// Test a positive scale for the circle
//

@Test
public void UpScale()
{
	double rad;	
	System.out.println("Running test UpScale.");
	rad  = circle1.scale(1.5);
	System.out.printf("circle: %f\n", circle1.scale(1.5));	
	Assert.assertTrue(rad > 3);
}


//
// Test a negative scale for the circle
//
@Test
public void DownScale()
{
	double rad;
	System.out.println("Running test DownScale.");
	rad = circle1.scale(0.5);
	System.out.printf("circle: %f\n", circle1.scale(0.5));	
	Assert.assertTrue(rad < 3);
}

//
//  Test if two circles intersect
//
@Test
public void intersection()
{
	Boolean flag = circle1.intersects(circle2);
	System.out.println("Running Intersection Test");
	System.out.println(circle1.intersects(circle2));
	Assert.assertTrue(flag == true);
	
}

//
//  Test if two circles do not intersect
//
@Test
public void intersection2()
{
	Boolean flag = circle1.intersects(circle3);
	System.out.println("Running Intersection Test");
	System.out.println(circle1.intersects(circle3));
	Assert.assertTrue(flag == false);
	
}

public static void main(String args[])
{
   try {
      org.junit.runner.JUnitCore.runClasses(
               java.lang.Class.forName("Circle1Test"));
   } catch (Exception e) {
      System.out.println("Exception: " + e);
   }
}


}

