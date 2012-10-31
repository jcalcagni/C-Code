#include <stdio.h>

integerPower(int, int); /* function prototype */

main()
{
	
	int base, exponent;


	/* prompt & scan for user input */
	/* for base and exponent */


	/* in this example, 3 is the base, 4 is the exponent */

	integerPower(3, 4); /* 3 is base, 4 is exponent */

	return 0;
}

/* function towersOfHanoi defintion */
integerPower(int base, int exponent)
{
	if (exponent == 1) {
	   return;
	}
	else
	{
        integerPower(base * exponent - 1);



	}

	return;

}

