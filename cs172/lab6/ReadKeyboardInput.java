import java.util.Scanner;

public class ReadKeyboardInput
{   
   public static Scanner input = new Scanner(System.in);
   public static String inputString;
   public static void main(String[] args)
   {     

      input.useDelimeter("\\n");

      System.out.print("Enter an integer: ");
      getInput();
      System.out.print("Enter a float: ");
      getInput();
      System.out.print("Enter a string: ");
      getInput();      
   }
    public static void getInput()
    {                 
      inputString = input.next();
      System.out.println("You have entered: " + inputString + ".");
    }
}