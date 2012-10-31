#include <stdio.h>

main()
{
	int num1, num2;
	
	printf ("Enter an integer: \n");
	scanf ("%d", &num1);
	
	printf ("Enter another integer: \n");
	scanf ("%d", &num2);

	if (num1 == num2)
	   printf("These numbers are equal\n");
	
	if (num1 > num2)
	   printf("%d is larger\n", num1);
	
	if (num1 < num2)
	   printf("%d is larger\n", num2);
	

}

