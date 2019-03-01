/******************************************************************************************
*
* Andrew Baca
* CS 478
* 
* a1_partA.c
*
* purpose: this program will read a ciphertext, compute and display the frequency analysis
*	   of the ciphertext, guess the key based on the frequencies of the analysis, and
*	   analyze the quality of the key by comparing the dictionary words to the decoded 
*	   message,and tweak the key intil greatest quality is achieved.  
*
* last edited: March 12, 2016
*
********************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 500
#define KEY_LEN 26
#define TEXT_LEN 458

int main(void)
{
	FILE  	*fpoint;
	FILE    *fp;						//initialize file pointer
	int   	input_status, i, j, cipher_len, swap,count, k,len;				//declare variables, arrays, and strings
	char  	letter,swapl, c;
	char	alpha[KEY_LEN] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char 	alpha_freq[KEY_LEN]  = "ETAOINSHRDLCUMWFGYPBVKJXQZ";
	int  	letter_count[KEY_LEN];
	char    cipher[TEXT_LEN];
	char	buffer[255];
	char    plain[TEXT_LEN];
	char    final_key[KEY_LEN] = "KRIBTPVLWYCJNAMQOZSEUGHFDX";
	
	

	
	
	printf("\n\n\n***CIPHERTEXT ANALYSIS***");
	fpoint = fopen("ciphertext.txt", "r");				//open file to read mode
	input_status = fscanf(fpoint, "%c", &letter);			//scan initial letter
	cipher_len = 0;

	while(input_status == 1)					//get length of the ciphertext
	{
		cipher[cipher_len] = letter;
		input_status = fscanf(fpoint, "%c", &letter);
		cipher_len = cipher_len + 1;
		
	}
	printf("\nCipher:\n");
	for( i = 0; i < TEXT_LEN; i++)
		printf("%c", cipher[i]);

	printf("\ncipher length: %d characters\n", cipher_len);
	fclose(fpoint);							//close and re open file to read	

	for(i = 0; i < KEY_LEN; i++)
		letter_count[i] = 0;					//initialize elements in letter_count to 0	
		
	fpoint = fopen("ciphertext.txt", "r");				//re-open file to read
	input_status = fscanf(fpoint, "%c", &letter);

	while(input_status == 1)					//take freq of each letter in ciphertext
	{
		for(j = 0; j < KEY_LEN; j++)
		{
			if(letter == alpha[j])
				letter_count[j] = letter_count[j] + 1;
		}
		input_status = fscanf(fpoint, "%c", &letter);
	}
	printf("\n\n***FREQUENCY IN EACH LETTER OF CIPHERTEXT***");	//print frequencies
	
	printf("\nletter   frequency\n");
	for(i = 0; i < KEY_LEN; i++)
		printf("   %c   |    %d \n", alpha[i], letter_count[i]);

	for( i = 0; i < KEY_LEN - 1; i++)				//bubble sort by most frequent letter
	{								//in ciphertext to least frequent letter
		for(j = 0; j < KEY_LEN - i - 1; j++)			//to start forming key
		{
			if(letter_count[j] < letter_count[j + 1])
			{
				swap = letter_count[j];
				swapl = alpha[j];
				letter_count[j] = letter_count[j + 1];
				alpha[j] = alpha[j + 1];
				letter_count[j + 1] = swap;
				alpha[j + 1] = swapl;
			}
		}
	}
	
	printf("\n\n***FREQUENCY IN EACH LETTER OF CIPHERTEXT in order***");	//print in order, with key next to it
	
	printf("\nletter | frequency  |  standard letter frequency corresponding\n");
	for(i = 0; i < KEY_LEN; i++)
		printf("   %c   |       %2d   |              %c         \n", alpha[i], letter_count[i], alpha_freq[i]);
	
	printf("\n\n***BASIC KEY BASED OFF FREQUENCY TABLE***\n\n");

	printf("KEY:\n");							//print key with pain and cipher texts
	printf("Plaintext:	 ");
	for(i = 0; i< KEY_LEN; i++)
		printf("%c  ", alpha_freq[i]);

	printf("\nCiphertext:	 ");
	for(i = 0; i < KEY_LEN; i++)
		printf("%c  ", alpha[i]);

	printf("\nFrequency:	");
	for(i = 0; i < KEY_LEN; i++)
		printf("%3d", letter_count[i]);

	printf("\n\n***FIRST ROUND OF DECODED CIPHERTEXT***\n");
	fclose(fpoint);
	fpoint = fopen("ciphertext.txt", "r");								//open file to read mode
	input_status = fscanf(fpoint, "%c", &letter);							//scan initial letter
	i = 0;

	while(input_status == 1)
	{
		c = letter;
		switch(c){
		case 'K':
			printf("E");
			plain[i] = 'E';
			break;
		case 'R':
			printf("T");
			plain[i] = 'T';
			break;		
		case 'B':
			printf("A");
			plain[i] = 'A';
			break;
		case 'P':
			printf("O");
			plain[i] = 'O';
			break;
		case 'T':
			printf("I");
			plain[i] = 'I';
			break;
		case 'I':
			printf("N");
			plain[i] = 'N';
			break;
		case 'V':
			printf("S");
			plain[i] = 'S';
			break;
		case 'L':
			printf("H");
			plain[i] = 'H';
			break;
		case 'W':
			printf("R");
			plain[i] = 'R';
			break;
		case 'A':
			printf("D");
			plain[i] = 'D';
			break;
		case 'C':
			printf("L");
			plain[i] = 'L';
			break;
		case 'J':
			printf("C");
			plain[i] = 'C';
			break;
		case 'N':
			printf("U");
			plain[i] = 'U';
			break;
		case 'O':
			printf("M");
			plain[i] = 'M';
			break;
		case 'Q':
			printf("W");
			plain[i] = 'W';
			break;
		case 'Y':
			printf("F");
			plain[i] = 'F';
			break;
		case 'E':
			printf("G");
			plain[i] = 'G';
			break;
		case 'M':
			printf("Y");
			plain[i] = 'Y';
			break;
		case 'S':
			printf("P");
			plain[i] = 'P';
			break;
		case 'G':
			printf("B");
			plain[i] = 'B';
			break;
		case 'U':
			printf("V");
			plain[i] = 'V';
			break;
		case 'Z':
			printf("K");
			plain[i] = 'K';
			break;
		case 'D':
			printf("J");
			plain[i] = 'J';
			break;
		case 'F':
			printf("X");
			plain[i] = 'X';
			break;
		case 'H':
			printf("Q");
			plain[i] = 'Q';
			break;
		case 'X':
			printf("Z");
			plain[i] = 'Z';
			break;
		default:
			printf("");
			plain[i] = ' ';
		}
		i = i + 1;
		input_status = fscanf(fpoint, "%c", &letter);
		c = letter;
	}
	printf("\n\n");
	
	fp = fopen("dictionary.txt", "r");
	count = 0;
	i = 0;
	j = 0;
	
	fgets(buffer, 255, (FILE*) fp);
	printf("%s", buffer);

	for(k = 0; k < 160736; k++)
	{
		len = strlen(buffer);
		buffer[len - 1] = '\0';
   		while (plain[i] != buffer[0] && plain[i] != '\0')
         		i++;
 
      		while (plain[i] == buffer[j] && plain[i] != '\0' && buffer[j] != '\0') {
         		i++;
       			j++;
		}
 
      		if (buffer[j] == '\0')
         		count = count + 1;
 
      		i = 0;
      		j = 0;
		fgets(buffer, 255, (FILE*) fp);
	}

	fclose(fpoint);
	fclose(fp);
	printf("\n\nthe amount of dictionary words this key produces is %d\n", count);
	printf("This is a very low result so we need to shift the key over ");
	printf("based on frequencies of the ciphertext lettering, and test again.\n");
        printf("We see that O, I, N, S, H have similar frquencies, so we will shift");
	printf("Those over one as well as D,L,C, and M,W,F,Y,P,B,V,K.\n\n"); 
	
	printf("****KEY: chancging key based on shifts with similar frequencies****\n");	


	fpoint = fopen("ciphertext.txt", "r");								//open file to read mode
	input_status = fscanf(fpoint, "%c", &letter);							//scan initial letter
	i = 0;

	while(input_status == 1)						//this will be the loop with the shiftable key
	{
		c = letter;
		switch(c){
		case 'K':
			printf("E");
			plain[i] = 'E';
			break;
		case 'R':
			printf("T");
			plain[i] = 'T';
			break;		
		case 'B':
			printf("O");
			plain[i] = 'O';
			break;
		case 'P':
			printf("N");
			plain[i] = 'N';
			break;
		case 'T':
			printf("I");
			plain[i] = 'I';
			break;
		case 'I':
			printf("A");
			plain[i] = 'A';
			break;
		case 'V':
			printf("S");
			plain[i] = 'S';
			break;
		case 'L':
			printf("H");
			plain[i] = 'H';
			break;
		case 'W':
			printf("R");
			plain[i] = 'R';
			break;
		case 'A':
			printf("M");
			plain[i] = 'M';
			break;
		case 'C':
			printf("L");
			plain[i] = 'L';
			break;
		case 'J':
			printf("C");
			plain[i] = 'C';
			break;
		case 'N':
			printf("U");
			plain[i] = 'U';
			break;
		case 'O':
			printf("G");
			plain[i] = 'G';
			break;
		case 'Q':
			printf("F");
			plain[i] = 'F';
			break;
		case 'Y':
			printf("D");
			plain[i] = 'D';
			break;
		case 'E':
			printf("V");
			plain[i] = 'V';
			break;
		case 'M':
			printf("W");
			plain[i] = 'W';
			break;
		case 'S':
			printf("Y");
			plain[i] = 'Y';
			break;
		case 'G':
			printf("K");
			plain[i] = 'K';
			break;
		case 'U':
			printf("B");
			plain[i] = 'B';
			break;
		case 'Z':
			printf("P");
			plain[i] = 'P';
			break;
		case 'D':
			printf("J");
			plain[i] = 'J';
			break;
		case 'F':
			printf("X");
			plain[i] = 'X';
			break;
		case 'H':
			printf("Q");
			plain[i] = 'Q';
			break;
		case 'X':
			printf("Z");
			plain[i] = 'Z';
			break;
		default:
			printf("");
			plain[i] = ' ';
		}
		i = i + 1;
		input_status = fscanf(fpoint, "%c", &letter);
		c = letter;
	}
	printf("\n\n");
	
	fp = fopen("dictionary.txt", "r");					//open dictionary textfile
	count = 0;
	i = 0;
	j = 0;
	
	fgets(buffer, 255, (FILE*) fp);

	for(k = 0; k < 160736; k++)						//algorithm to compare dictionary to text
	{
		len = strlen(buffer);						//get word length and change last element to null
		buffer[len - 1] = '\0';
   		while (plain[i] != buffer[0] && plain[i] != '\0')		//match first dictionary letter with text letter
         		i++;
 
      		while (plain[i] == buffer[j] && plain[i] != '\0' && buffer[j] != '\0') {	//increment when the text matches dictionary
         		i++;									//letter by letter
       			j++;
		}
 
      		if (buffer[j] == '\0'){							//if dictionary word reaches end, increment word 
         		count = count + 1;
		}
 			
      		i = 0;									//reset letter counts
      		j = 0;
		fgets(buffer, 255, (FILE*) fp);						//get new words
	}

	printf("\n\nthe amount of dictionary words this key produces is %d\n", count);

	printf("\nFINAL KEY:\n");
	printf("Plaintext:	 ");
	for(i = 0; i< KEY_LEN; i++)
		printf("%c  ", alpha_freq[i]);
	printf("\n");
	printf("Ciphertext:	 ");
	for(i = 0; i< KEY_LEN; i++)
		printf("%c  ", final_key[i]);
	
	printf("\n\nDECODED MESSAGE:\n");
	printf("EVEN THOUGH WE DONT KNOW WHICH COMPANIES THE NSA HAS COMPROMISED OR BY WHAT MEANS KNOWING THAT THEY COULD ");
	printf("HAVE COMPROMISED ANY OF THEM IS ENOUGH TO MAKE US MISTRUSTFUL OF ALL OF THEM THIS IS GOING TO MAKE IT HARD FOR ");
	printf("LARGE COMPANIES LIKE GOOGLE AND MICROSOFT TO GET BACK THE TRUST THEY LOST EVEN IF THEY SUCCEED IN LIMITING GOVERNMENT ");
	printf("SURVEILLANCE EVEN IF THEY SUCCEED IN IMPROVING THE IR OWN INTERNAL SECURITY THE BEST THEYLL ");
	printf("BE ABLE TO SAY IS WE HAVE SECURED OURSELVES FROM THE NSA EXCEPT FOR THE PARTS THAT WE EITHER DONT KNOW ABOUT OR CANT TALK ABOUT\n");



	printf("\n");									//close files and end program
	fclose(fp);
	fclose(fpoint);
	
	return(0);
}
	
	
	
