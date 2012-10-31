#include <stdio.h>

main()
{
	

	int counter = 1, line = 8;

	while (line > 0) {
	if (line % 2 != 0) 
	   printf (" ");

	   while (counter <= 8) {
	      printf ("* ");
              counter++;

	   }

	--line;

	printf ("\n");
	counter = 1;
	}	



	return 0;


}

