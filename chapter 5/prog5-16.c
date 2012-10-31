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
	int i, result = 1, previous, sum;
	
	for (i = exponent; i >= 1; --i) {
	   
	   sum = base * result; 
	   previous = result;
	   result = sum;
	   
	}
	/* need logic if exponent is negative */

}

