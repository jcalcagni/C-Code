#include <stdio.h>

integerPower(int, int); /* function prototype */

main()
{
	
	int base, exponent;


	/* prompt & scan for user input */
	/* for base and exponent */

	printf ("Enter an Integer for the base: ");
	scanf ("%d", &base);
	
	printf ("Enter an Integer for the exponent: ");
	scanf ("%d", &exponent);

	printf ("Result of %d to the power of %d is %d.\n", base, exponent, integerPower(base, exponent));

	return 0;
}

/* function integerPower defintion */
integerPower(int base, int exponent)
{

	if (exponent ==	1) {
	   return base;
	}
	else {
	   return base * integerPower(base, exponent - 1); 
	}

	/* need logic if exponent is negative */

}

