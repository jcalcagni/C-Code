#include <stdio.h>

main()
{

	int i, x, sum = 0, next;
	
	printf ("Enter 5 numbers between 1 and 30: ");
	
	for (i = 1; i <= 5; i++) {
	scanf ("%d", &next);
        
        if (next < 1 || next > 30) {
	   printf ("Only numbers between 1 and 30.\n");
        }
        else
	   for (x = 1; x <= next; x++) {
	     printf ("*");
	   } 

	printf ("\n");
        }
	return 0;



}

