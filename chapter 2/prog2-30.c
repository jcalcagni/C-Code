#include <stdio.h>

main()
{
	int num1, tenThousand, thousand, hundred, ten, one;
	
	printf ("Enter a 5 digit number: \n");
	scanf ("%d", &num1);

	if (num1 > 99999)
	   printf("%d is too large.  5 digit numbers only, please\n", num1);
	
	tenThousand = num1 / 10000;
	thousand = (num1 - (tenThousand * 10000)) / 1000;
	hundred = (num1 - ((tenThousand * 10000) + (thousand * 1000))) / 100;
	ten = (num1 - ((tenThousand * 10000) + (thousand * 1000) + (hundred * 100))) / 10;
	one = (num1 - ((tenThousand * 10000) + (thousand * 1000) + (hundred * 100) + (ten * 10)));	


	printf ("%d   %d   %d   %d   %d\n", tenThousand, thousand, hundred, ten, one);




}

