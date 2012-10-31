#include <stdio.h>

main()
{

	int column, sides = 1, counter = 1, flag = 0;
	
	printf ("Enter a number between 1 and 20): ");
	scanf ("%d", &sides);
	
            if (sides < 1)  /* set flag if larger than 1 or 2 */
	       flag = 1;
            if (sides > 20) 
	       flag = 1;
	   
	    if (flag == 0) {	

	while (counter <= sides) {
           column = 1;
           
             while (column <= sides) {
	      

                if (counter  == 1){           /* check if first row, make entire row asterisk */
                while (column <= sides) {
                printf ("*");
	        column++;
                } 
             }   
             /* prints columns with blanks */

	      if (column == 1){
                 printf ("*");
              }
              if (column > 1) {
                if (column < sides){
                printf (" ");
	        }
              }
              if (column == sides) {
 	       printf ("*");
              }
	      column++; 
                 
                 if (counter  == sides){ /* check if last row check if first row, make entire row asterisk*/
                  while (column <= sides) {
                  printf ("*");
	          column++;
                  } 
                 }   
              
   
	     }

	   counter++;
  	   printf ("\n");
        }
       }

	      else
              printf ("Please enter a number between 1 and 20.\n"); 
	      flag = 0;
	return 0;
}

