#include <stdio.h>

main()
{

	int i, j, x, y, z, a, b, c, d, e, f;

/* first pattern */
	
	for (i = 0; i <= 10; i++) {
	   for (j = 1; j < i; j++) {
	     printf ("*");
	   }

	   printf ("\n");
	}

/* second pattern */

	for (x = 0; x <= 10; x++) {
	   for (y = 10; y > x; y--) {
	     printf ("*");
	   }

	   printf ("\n");
	}
	

/* third pattern */

	for (a = 0; a <= 10; a++) {
	   for (b = 1; b <= a ; b++) {
	     printf (" ");
	   } 
	  for (c = 10; c > a; c--) {
	     printf ("*");
	   } 
          printf ("\n"); 
	}

/* fourth pattern */

       for (d = 0; d <= 10; d++) {
	   for (e = 10; e > d ; e--) {
	     printf (" ");
	   } 
	   for (f = 0; f < d; f++) {
	     printf ("*");
	   } 
          printf ("\n"); 
	}


     return 0;
}

