/***************************************************************************************************************************************
*
* Andrew Baca
* CS 471
*
* controlBLock.java
* Purpose: This program will read in a text file, and remove any extraneous data that the file inherited through a "backup" program,
*	   and close the file.  
*
* note: code retrieved from http://www.java2s.com/Code/Java/File-Input-Output/Readfilecharacterbycharacter.htm
*
*****************************************************************************************************************************************/
import java.io.File;				//include IO libraries for file handling
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class controlBlock {
  public static void main(String[] args) {
    File file = new File("control-char.txt");		//declare 2 file objects
    File file0  = new File("update.txt");
    boolean flag = true;

    if (!file.exists()) {
      System.out.println("file does not exist.");		//error message for file if doesnt exist
      return;
    }
    if (!(file.isFile() && file.canRead())) {			//error message for file readability
      System.out.println(file.getName() + " cannot be read from.");
      return;
    }
    try {
      FileInputStream fis = new FileInputStream(file);		//start file stream to read
      FileOutputStream fos = new FileOutputStream(file0);	//start file stream to write
      char current;
      int asciiVal;
      while (fis.available() > 0) {
        current = (char) fis.read();				//get single char
	asciiVal = (int) current;				//convert to ascii int
	if(asciiVal == 2 || asciiVal == 3)			//set flag if controls are ran into
	{
		if(asciiVal == 2)
			flag = true;
		if(asciiVal == 3)
			flag = false;
	}
	if(flag == true && asciiVal != 2){			//print values to new file given flag			
        	//System.out.print(asciiVal + " ");
		//System.out.println(current);
		fos.write(current);
	}
      }
    } catch (IOException e) {
      e.printStackTrace();
    }

  }
}

