#include <stdio.h>

main()
{
	/* intitialize and declare variables */
	int passes = 0, failures = 0, student =1, flag = 0, result;	
	
	 /* process 10 students, counter controlled loop */
	   while (student <= 10){
  	    printf ("Enter result (1=pass, 2=fail): ");
	    scanf ("%d", &result);

	    if (result < 1)  /* set flag if larger than 1 or 2 */
	       flag = 1;
            if (result > 2) 
	         flag = 1;
	    

	     if (flag == 0) {	
  	        if (result == 1){
	          passes++;
                }
	        else
	          failures++;
	          student++;
	        }
            else
              printf ("Please enter a 1 or 2.\n"); 
	      flag = 0;
            }
               printf ("Passed: %d\n", passes);
               printf ("Failed: %d\n", failures);

	if (passes > 8) 
	  printf ("Raise tuition.\n");	 
	
	return 0;
}

