#include <stdio.h>

main()
{

	int i, input = 0, fact = 1, ulimit = 10;
	/* ulimit cant go above 16 with int variable */
	
	printf ("N\t\tN Factorial\n");	

	for (i = 1; i <= ulimit; i++) {
	    fact = fact * i;

	    printf ("%d\t\t%d\n", i, fact);

     }
      
	return 0;
}
