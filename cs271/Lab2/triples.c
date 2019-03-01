/**********************************************************
*
* triples.c
* Andrew Baca
* Febuary 4, 2016
* 
* CS 271 Section MO2
* Lab 2
*
* Purpose: this program finds and displays all the pythagorean 
* 	   with the hypotenuse ranging from 0 to 1000
*
*************************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  
  int triple_leg_1 = 0;							//declare all variables here
  int triple_leg_2 = 0;
  int triple_hyp = 0;
  int hold = 0;
  double leg1 = 0.0;
  double leg2 = 0.0;
  double hypotenuse = 0.0;
  double hyp_compare = 0.0;
  
  printf("\n\n********PYTHAGOREAN TRIPLES***********\n\n");
  printf("leg1   leg2   hypotenuse\n");

  for(triple_leg_1 = 0; triple_leg_1 <= 1000; ++triple_leg_1){			//for loop incrementing leg1

    leg1 = (double)triple_leg_1;						//hold leg1 in type double
    
    for(triple_leg_2 = 0; triple_leg_2 <= 1000; ++triple_leg_2){		//for loop incrementing leg2
    
      leg2 = (double)triple_leg_2;						//hold leg2 in type double	

      for(triple_hyp = 0; triple_hyp <= 1000; ++triple_hyp){			//for loop incrementing hypotenuse
	
	hypotenuse = (double) triple_hyp;					//hold hypotenuse in type double
	
	if((triple_leg_1 > 2) && (triple_leg_1 % 3 == 0) && (triple_leg_2 % 4 == 0)){			//check for remainders
	  
	  hold = triple_leg_1 + (triple_leg_1 / 3);
	  
	  if((triple_leg_2 == hold) && (triple_leg_2 > triple_leg_1) && (triple_hyp % 5 == 0)){		//check for legsize and remainders
	    
	    hyp_compare = sqrt(leg1 * leg1 + leg2 * leg2);			//get hypotenuse
	    
	    if(hypotenuse == hyp_compare){
	      
	      printf(" %2d%6d%9d\n", triple_leg_1, triple_leg_2, triple_hyp);	//display triples
	      
	    }			//end if
	  }		      //end if
	}		     //end if
      }			    //end for
    }			    //end for
  }			//end for
  
}     //end main