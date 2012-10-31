#include <stdio.h>

main()
{

	int accountNo = 0, inewBalance = 0, icreditLimit = 0;	
	float begBalance = 0, totCharges = 0, totCredits = 0, creditLimit = 0, newBalance = 0;
	
	printf ("Enter account number (-1 to end): ");
	scanf ("%d", &accountNo);
	
	if (accountNo != -1) {
	  printf ("Enter beginning balance: ");
  	  scanf ("%f", &begBalance);	
	  printf ("Enter total charges: ");
  	  scanf ("%f", &totCharges);
	  printf ("Enter total credits: ");
  	  scanf ("%f", &totCredits);
	  printf ("Enter credit limit: ");
  	  scanf ("%f", &creditLimit);
	  }
	else
	  printf ("No information entered.\n");

	  newBalance = (begBalance + totCharges) - totCredits;
	  inewBalance = (int)newBalance;
	  icreditLimit = (int)creditLimit;

	  if (inewBalance > icreditLimit) {
		printf ("Account:      %d\n", accountNo);
		printf ("Credit Limit: %.2f\n", creditLimit);
		printf ("Balance:      %.2f\n", newBalance);
		printf ("Credit Limit Exceeded.\n");
	        printf ("\n");
	  }        
		
	while (accountNo != -1){
	  printf ("Enter account number (-1 to end): ");
	  scanf ("%d", &accountNo);

	if (accountNo != -1) {
	  printf ("Enter beginning balance: ");
  	  scanf ("%f", &begBalance);	
	  printf ("Enter total charges: ");
  	  scanf ("%f", &totCharges);
	  printf ("Enter total credits: ");
  	  scanf ("%f", &totCredits);
	  printf ("Enter credit limit: ");
  	  scanf ("%f", &creditLimit);
	 }	  

	newBalance = begBalance + totCharges - totCredits;
	  if ((int) newBalance > (int)creditLimit) {
		printf ("Account:      %d\n", accountNo);
		printf ("Credit Limit: %.2f\n", creditLimit);
		printf ("Balance:      %.2f\n", newBalance);
		printf ("Credit Limit Exceeded.\n");
	        printf ("\n");
	  }        

          }

	return 0;
}

