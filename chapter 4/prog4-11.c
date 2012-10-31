#include <stdio.h>

main()
{

	int i, input = 0, smallest, next;
	
	printf ("Enter integers to be added together: ");
	scanf ("%d", &input);

/* assume first number lists the subsequent #'s to enter. for example, 5 2 3 4 6 8 means 5 signals the next 5 numbers (2, 3, 4, 6, 8) are relevant values to examine*/

	for (i = 1; i <= input; i++) {
	scanf ("%d", &next);

	   if (i == 1){
	   smallest = next; 
	   }

           if (next <= smallest) {
	      smallest = next;
	   }

     }
       printf ("smallest is : %d\n", smallest);
	return 0;
}

