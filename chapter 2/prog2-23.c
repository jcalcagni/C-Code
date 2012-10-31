#include <stdio.h>

main()
{
	int num1, num2, num3, num4, num5, largest, smallest;

	largest = 0;
	smallest = 0;

	printf ("Input five different integers: ");
	scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
		
	largest = num1;  /* set largest equal to first integer */

	if (num1 < num2)
	  largest = num2;

	if (largest < num3)
	  largest = num3;

	if (largest < num4)
	  largest = num4;

	if (largest < num5)
	  largest = num5;

	printf ("Largest is %d\n", largest);

	smallest = num1; /* set smallest equal to num1 */

	if (num1 > num2)
	  smallest = num2;

	if (smallest > num3)
	  smallest = num3;

	if (smallest > num4)
	  smallest = num4;

	if (smallest > num5)
	  smallest = num5;
	
	printf ("Smallest is %d\n", smallest);


}

