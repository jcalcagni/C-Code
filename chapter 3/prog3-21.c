#include <stdio.h>

main()
{

	int hours = 0, otHours;	
	float rate = 0, salary = 0, otRate = 0;
	
	printf ("Enter # of hours worked (-1 to end): ");
	scanf ("%d", &hours);
	
	if (hours != -1) {
	  printf ("Enter hourly rate of the worker ($00.00): ");
  	  scanf ("%f", &rate);	
	  if (hours > 40) {
	  otHours = hours  - 40;
          otRate = rate * 1.5;
	  salary = (rate * 40) + (otRate * otHours);
	  }
	  else
	  salary = rate * hours;
	  printf ("Salary is $%.2f\n", salary);
	}
	else
	  printf ("No information entered.\n");

	while (hours != -1) {
	  
	  printf ("Enter # of hours worked (-1 to end): ");
	  scanf ("%d", &hours);
	
	  if (hours != -1) {
	  printf ("Enter hourly rate of the worker ($00.00): ");
  	  scanf ("%f", &rate);	
	  if (hours > 40) {
	  otHours = hours  - 40;
          otRate = rate * 1.5;
	  salary = (rate * 40) + (otRate * otHours);
	  }
          else 
	  salary = rate * hours;
	  printf ("Salary is $%.2f\n", salary);
	  }
	}
	return 0;
}

