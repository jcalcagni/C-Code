#include <stdio.h>
#include <math.h>

main()
{
	float side1, side2, side3;

	int flag, side1side2sum = 0, side2side3sum = 0, side1side3sum = 0, side1side2diff = 0, side2side3diff = 0, side1side3diff = 0;	

	printf ("Enter a number: \n");
	scanf ("%f", &side1);

	printf ("Enter another number: \n");
	scanf ("%f", &side2);

	printf ("Enter a third number: \n");
	scanf ("%f", &side3);

/* convert to absolute value in case user enters negative number */
	side1 = abs((int) side1);
	side2 = abs((int) side2);
	side3 = abs((int) side3);

/* compute sums / differences of sides for comparison */
	side2side3sum = (int) side2 + (int) side3;
	side1side2sum = (int) side1 + (int) side2;
	side1side3sum = (int) side1 + (int) side3;
	side1side2diff = abs ((int) side1 - (int) side2);
	side2side3diff = abs ((int) side2 - (int) side3);
	side1side3diff = abs ((int) side1 - (int) side3);


/* each side side must be less than the sum of the other 2 sides for a triangle */
/* each side must also greater than the difference between sides */
     
	if (side1 <= (side2side3sum)) {
	   if (side1 >= (side2side3diff)) {
	   flag = 1;
           }
	   else
	   flag =0;
           
        } 
	 
	if (side2 <= (side1side3sum)) {
	   if (side2 >= (side1side3diff)) {
	   flag = 1;
           }
	   else 
           flag = 0;
          }

	 if (side3 <= (side1side2sum)) {
	   if (side3 >= (side1side2diff)) {
	   flag = 1;
           }
           else	
	   flag = 0;

         }
	 
	if (flag == 1) {
	   printf ("you entered %.2f, %.2f, %.2f.  These can form a triangle.\n", side1, side2, side3);
        }	
	else
           printf ("you entered %.2f, %.2f, %.2f.  These can not form a triangle.\n", side1, side2, side3);



   return 0;
        
}

