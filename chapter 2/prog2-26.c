#include <stdio.h>

main()
{
	int num1, num2;
	
	printf ("Enter an integer: \n");
	scanf ("%d", &num1);

	printf ("Enter another integer: \n");
	scanf ("%d", &num2);
	
	if (num1 % num2 == 0)
	   printf("%d is a multiple of %d.\n", num2, num1);
	
	if (num1 % num2 != 0)
	   printf("%d is not a multiple of %d.\n", num2, num1);
	
}

