#include <stdio.h>

main()
{

	int counter = 0;
	
	while (counter > -1 ) {  /* infinite loop */
           
	  if (counter % 2 == 0) 
	    printf ("%d\n", counter); 

	counter++;
        }
	      
	return 0;
}

