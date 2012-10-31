#include <stdio.h>

drawSide(int); /* function prototype */

main()
{
	
	int side;


	/* prompt & scan for user input */
	/* for base and exponent */

	printf ("Enter an integer: ");
	scanf ("%d", &side);
	

	drawSide(side);

	return 0;
}

/* function drawSide defintion */
drawSide(int side)
{
	int i, j;
	

	for (j = 1; j <= side; j++) {
 	   for (i = 1; i <= side; i++) {
	     printf ("*");
	    }
	    printf ("\n");
	}

	/* need logic if integer is negative */

}

