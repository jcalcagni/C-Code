#include <stdio.h>

main()
{

	int i = 0, product = 1;
	
	do {
	   
	   if (i % 2 != 0) {
	   product *= i;
	   }
	} while (++i <= 15);


	printf ("product is: %d\n", product); 


	return 0;
}

