#include <stdio.h>

main()
{

	int days = 0;	
	float principal = 0, rate = 0, simpleInt = 0;
	
	printf ("Enter loan principal (-1 to end): ");
	scanf ("%f", &principal);
	
	if ((int) principal != -1) {
	  printf ("Enter interest rate: ");
  	  scanf ("%f", &rate);	
	  printf ("Enter the term of the loan in days: ");
  	  scanf ("%d", &days);	

	  simpleInt = principal * rate * days / 365;
	  printf ("The interest charge is: $%.2f\n", simpleInt);	  
	}
	else
	  printf ("No information entered.\n");

	while ((int) principal != -1){
	  printf ("Enter loan principal (-1 to end): ");
	  scanf ("%f", &principal);
	
	if ((int) principal != -1) {
	  printf ("Enter interest rate: ");
  	  scanf ("%f", &rate);	
	  printf ("Enter the term of the loan in days: ");
  	  scanf ("%d", &days);	
	  simpleInt = principal * rate * days / 365;
	  printf ("The interest charge is: $%.2f\n", simpleInt);	  
	 }
	 }	  

	return 0;
}

