#include <stdio.h>

main()
{

	int num1, thousand, hundred, ten, one, swap, decrypted;
	
	printf ("Please enter a 4 digit encrypted number: \n");
	scanf ("%d", &num1);

	if (num1 > 9999)
	   printf("%d is too large.  4 digit numbers only, please\n", num1);
	
	thousand = (num1 / 1000);
	hundred = (num1 -  (thousand * 1000)) / 100;
	ten = (num1 - ((thousand * 1000) + (hundred * 100))) / 10;
	one = num1 - ((thousand * 1000) + (hundred * 100) + (ten * 10));	


	/* swap digit 1 and digit 3 for decryption */

	swap = ten;
	ten = thousand;
	thousand = swap;

	/* swap digit 2 and digit 4 for decryption */
	swap = one;
	one = hundred;
	hundred = swap;
	
	/* now change values for encryption */
	thousand = (thousand + 3) % 10;
	hundred = (hundred + 3) % 10;	
	ten = (ten + 3) % 10;	
	one = (one + 3) % 10;

	/* now put it back together */
	decrypted = (thousand * 1000) + (hundred * 100) + (ten * 10) + one;

	printf ("%4d\n", decrypted);

   return 0;
}

