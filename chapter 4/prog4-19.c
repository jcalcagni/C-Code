#include <stdio.h>

main()
{

	int i, product, quantity;
	double price, total, weeklyTotal;
	
	printf ("Enter product number and quantity sold (weekly): ");
	printf ("Enter quantity as a negative to end input. \n");

	scanf ("%d %d", &product, &quantity);
	
	if (quantity >= 0) {

	 switch (product) {
	   case 1:
	      price = 2.98;
	      break;
	   case 2:
	      price = 4.50;
	      break;
	   case 3:
	      price = 9.98;
	      break;
	   case 4:
	      price = 4.49;
	      break;
	   case 5:
	      price = 6.87;
	      break;

          }
        }

	total = price * quantity;
	weeklyTotal += total;

	printf ("total is: %.2lf\n", total);
	printf ("Weekly total is: %.2lf\n", weeklyTotal);

	return 0;

}

