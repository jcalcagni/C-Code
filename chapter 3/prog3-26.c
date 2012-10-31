#include <stdio.h>

main()
{

	int counter = 3;	

	printf ("A\t\tA+2\t\tA+4\t\tA+6\n");
	printf ("\n");	

	while (counter <= 15){
	printf ("%d\t\t%d\t\t%d\t\t%d\n", counter, counter + 2, counter + 4, counter + 6);
         counter+= 3; 
        }

	return 0;
}

