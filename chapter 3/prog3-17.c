#include <stdio.h>

main()
{

	float gallons = 0, miles = 0, totalMiles = 0, totalGallons = 0, average = 0, result = 0;
	
	printf ("Enter the gallons used (-1 to end): ");
	scanf ("%f", &gallons);
	
	if ((int)gallons != -1) {
	  printf ("Enter the miles driven: ");
  	  scanf ("%f", &miles);	
	  average = miles / gallons;
	  printf ("The miles / gallon for this tank was %f\n", average);
	  }        
	else
	  printf ("No information entered.\n");
	
	while (gallons != -1){
	  totalGallons += gallons;
	  totalMiles += miles;
	  
	  printf ("Enter the gallons used (-1 to end): ");
	  scanf ("%f", &gallons);

	  if ((int)gallons != -1) {
	  printf ("Enter the miles driven: ");
  	  scanf ("%f", &miles);

	  average = miles / gallons;
	  printf ("The miles / gallon for this tank was %f\n", average);
	  }

	}

	 result = totalMiles / totalGallons;
	 printf ("the overall average miles / gallon was : %.2f\n", result);
	
	return 0;
}

