#include <stdio.h>

main()
{

	int accountNo = 0,;	
	double begBalance = 0, totCharges = 0, totCredits = 0, creditLimit = 0, newBalance = 0;
	
	printf ("Enter account number (-1 to end): ");
	scanf ("%d", &accountNo);
	
	if (accountNo != -1) {
	  printf ("Enter current credit limit: ");
  	  scanf ("%f", &creditLimit);

	  printf ("Enter current balance: ");
  	  scanf ("%f", &begBalance);	
	  }
	else
	  printf ("No information entered.\n");

	   newBalance = (int)newBalance;
	   creditLimit = (int)creditLimit * 0.5;

	  if (newBalance > creditLimit) {
		printf ("Account:      %d\n", accountNo);
		printf ("New Credit Limit: %.2f\n", creditLimit);
		printf ("Balance:      %.2f\n", newBalance);
		printf ("Credit Limit Exceeded.\n");
	        printf ("\n");
	  }        
		
	while (accountNo != -1){
	  printf ("Enter account number (-1 to end): ");
	  scanf ("%d", &accountNo);

	if (accountNo != -1) {
	 printf ("Enter current credit limit: ");
  	  scanf ("%f", &creditLimit);

	  printf ("Enter current balance: ");
  	  scanf ("%f", &begBalance);	
	  }	  

	   newBalance = (int)newBalance;
	   creditLimit = (int)creditLimit * 0.5;

	   if (newBalance > creditLimit) {
		printf ("Account:      %d\n", accountNo);
		printf ("New Credit Limit: %.2f\n", creditLimit);
		printf ("Balance:      %.2f\n", newBalance);
		printf ("Credit Limit Exceeded.\n");
	        printf ("\n");
	  }              

          }

	return 0;
}

