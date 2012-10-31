#include <stdio.h>

main()
{

	int i = 0, sum = 0;
	
	do {
	   
	   if (i % 2 == 0) {
	   sum += i;
	   }
	} while (++i <= 30);


	printf ("sum is: %d\n", sum); 


	return 0;
}

