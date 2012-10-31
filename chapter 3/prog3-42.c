#include <stdio.h>

main()
{
	float radius, diameter, circumference, area;
	const pi = 3.14159;
	
	printf ("Enter radius of a circle: \n");
	scanf ("%f", &radius);

	diameter = radius * 2;
	printf ("The circle's diameter is: %f\n", diameter);

	circumference = pi * diameter; /* also pi * (radius * 2) */
	printf ("The circle's circumference is: %f\n", circumference);

	area = pi * radius * radius;
	printf ("The circle's area is: %f\n", area);

}

