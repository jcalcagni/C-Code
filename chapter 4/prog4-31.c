#include <stdio.h>

main()
{

	int a, b, c, d, e, f, g, h, i, j;


       for (f = 1; f <= 10; f += 2) {
	   for (g = 9; g > f; g -= 2) {
	     printf ("@");
	   } 
	printf ("\n");
	}  
       for (i = 1; i <= 10; i += 2) {
	   for (j = 1; j < i; j += 2) {
	     printf ("@");
	   }
	if (j != 1) {	
	printf ("\n");
	 }
	}


     return 0;
}

