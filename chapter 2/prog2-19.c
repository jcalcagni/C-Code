#include <stdio.h>

main()
{
	int num1, num2, num3, average, product, largest, smallest;

	largest = 0;
	smallest = 0;

	printf ("Input three different integers: ");
	scanf ("%d %d %d", &num1, &num2, &num3);
		
	printf ("Sum is: %d\n", num1 + num2 + num3);

	average = (num1 + num2 + num3) / 3;
	printf ("Average is: %d\n", average);

	product = num1 * num2 * num3;
	printf ("The product is: %d\n", product);	

	if (num1 > num2)
	  largest = num1;

	if (num1 < num3)
	  largest = num3;

	if (num2 > largest)
	   largest = num2;

	printf ("Largest is %d\n", largest);
	
	if (num1 < num2)
	  smallest = num1;

	if (num3 < num1)
	  smallest = num3;

	if (num2 < smallest)
	   smallest = num2;
	
	printf ("Smallest is %d\n", smallest);

}

