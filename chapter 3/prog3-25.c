#include <stdio.h>

main()
{

	int counter = 1;	

	printf ("N\t\t10*N\t\t100*N\t\t1000*N\n");
	printf ("\n");	

	while (counter <= 10){
	printf ("%d\t\t%d\t\t%d\t\t%d\n", counter, counter * 10, counter * 100, counter * 1000);
         counter++; 
        }

	return 0;
}

