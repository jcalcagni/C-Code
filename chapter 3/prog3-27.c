#include <stdio.h>

main()
{

	int counter = 1, number = 0, largest = 0, secLargest = 0;	
	
	while (counter <= 10){
  	 printf ("Enter # of units sold: ");
	 scanf ("%d", &number);
         counter++; 
                 
        if (number > largest)  { /* check if number is largest number entered */
	   secLargest = largest; /* keep older value of largest as second largest */
	   largest = number;
	 }
	  
	 if (number > secLargest) {   /* check if number entered is higher than second largest */
/* make sure number is not the largest number entered. make sure previous logic did not trigger */
	      if (number != largest) { 
		secLargest = number;
	      }
         }

	
	}

        printf ("Largest number of units sold is: %d\n", largest);
        printf ("Second largest number of units sold is: %d\n", secLargest);	 
	return 0;
}

