#include <stdio.h>

main()
{
	int num1, num2;
	
	printf ("Enter 2 integers: \n");
	scanf ("%d %d", &num1, &num2)   ;

	printf ("The sum is: %d\n", num1 + num2);
	printf ("The difference is: %d\n", num1 - num2);
	printf ("The product is: %d\n", num1 * num2);
	printf ("The quotient is: %d\n", num1 / num2);
	printf ("The modulus is: %d\n", num1 % num2);
}

