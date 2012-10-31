#include <stdio.h>
#include <math.h>

main()
{

	int year;
	double amount, principal = 1000.0, rate;

	for (rate = .05; rate <= .10; rate += .01){

  	   printf ("%4s%21s%10s\n", "Year", "Amount on deposit", "Rate");

	   for (year = 1; year <= 10; year++) {
	      amount = principal * pow(1.0 + rate, year);
	      printf ("%4d%21.2f%10.2f\n", year, amount, rate * 100);

           }
	}
      
	return 0;
}
