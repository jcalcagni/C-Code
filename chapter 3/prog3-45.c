#include <stdio.h>
#include <math.h>

main()
{
	float side1, side2, side3;

	int flag = 0, largest = 0, side1sq = 0, side2sq = 0, side3sq = 0;	

	printf ("Enter a number: \n");
	scanf ("%f", &side1);

	printf ("Enter another number: \n");
	scanf ("%f", &side2);

	printf ("Enter a third number: \n");
	scanf ("%f", &side3);

/* convert to absolute value in case user enters negative number */
	side1 = abs((int) side1);
	side2 = abs((int) side2);
	side3 = abs((int) side3);

/* largest side squared must equal the sum of other 2 sides squared for right triangle*/
     

	side1sq = (int) side1 * (int) side1;
	side2sq = (int) side2 * (int) side2;
	side3sq = (int) side3 * (int) side3;

	flag = 0;
	if (side1sq == (side2sq + side3sq))
	   flag = 1;
	if (side2sq == (side1sq + side3sq))
	   flag = 1;
	if (side3sq == (side1sq + side2sq))
	   flag = 1;

	if (flag == 1) {
	   printf ("you entered %.2f, %.2f, %.2f.  These can form a right triangle.\n", side1, side2, side3);
        }	
	else
           printf ("you entered %.2f, %.2f, %.2f.  These can not form a right triangle.\n", side1, side2, side3);



   return 0;
        
}

