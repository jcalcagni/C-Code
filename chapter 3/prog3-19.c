#include <stdio.h>

main()
{

	float sales = 0, salary = 0, commission = 0, totalComp = 0;
	
	printf ("Enter sales in dollars (-1 to end): ");
	scanf ("%f", &sales);
	
	if ((int) sales != -1) {
	  salary = 200.00;
	  commission = 0.09 * sales;
	  totalComp = salary + commission;

	  printf ("Salary is:  $%.2f\n", totalComp);
	  }        
	else
	  printf ("No information entered.\n");
	
	while ((int) sales != -1){
	  printf ("Enter sales in dollars (-1 to end): ");
	  scanf ("%f", &sales);
	
	if ((int) sales != -1) {
	  salary = 200.00;
	  commission = 0.09 * sales;
	  totalComp = salary + commission;

	  printf ("Salary is:  $%.2f\n", totalComp);
	  }        

	}

	return 0;
}

