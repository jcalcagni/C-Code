#include <stdio.h>

main()
{

	int counter = 1;
	
	while (counter <= 101) {  /* initialize counter to 1 and go to 101 instead of 0 to 100 to eliminate
                                     checking if initial value is zero */
           
	  if (counter % 10 == 0) 
	    printf ("*\n"); 

           else
	    printf ("*");
	  
	counter++;
        }
	      
	return 0;
}

