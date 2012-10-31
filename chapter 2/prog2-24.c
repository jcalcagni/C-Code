#include <stdio.h>

main()
{
	int num1;
	
	printf ("Enter an integer: \n");
	scanf ("%d", &num1);

	if (num1 % 2 == 0)
	   printf("%d is even.\n", num1);
	
	if (num1 % 2 != 0)
	   printf("%d is odd.\n", num1);
	
}

