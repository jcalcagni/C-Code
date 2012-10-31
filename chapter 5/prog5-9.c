#include <stdio.h>
#include <math.h>

double calculateCharges(double); /* function prototype */

main()
{

	int accountNo = 0, i = 1;
	double hours = 0, totCharges = 0, totHours = 0;

          for (i = 1; i <= 3; i++) {
          
 	    printf ("Enter hours parked: ");
	    scanf ("%lf", &hours);

            printf ("hours are: %.2f, charges are: %.2f\n", hours, calculateCharges(hours));
	
	    totHours = totHours + hours;
	    totCharges = totCharges + calculateCharges(hours);

	  }

	 printf ("Car\t\tHours\t\tCharge\n");
	/* printf ("%f\t\t" hoursFirst, "%f\n", chargesFirst);*/
	 printf ("TOTAL\t\t%.2f\t\t%.2f\n", totHours, totCharges);
	 printf ("\n"); 


	return 0;
}

/* function calculate-Charges defintion */
double calculateCharges(double hours)
{
	double calc = 0, mini = 2.00, increment = 0.50, charge = 0;
	
	hours -= 3;
	hours = ceil(hours);	   
	charge = (hours * increment) + mini;

	if (charge > 10.00) {
	   charge = 10.00;
	}
	
	return charge;
}

