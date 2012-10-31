#include <stdio.h>

void towersOfHanoi(char, char, char, int); /* function prototype */

main()
{
	
	char peg1 = '1', peg2 = '2', peg3 = '3';
	int i;

	printf ("Enter the number of disks on Left Peg: ");
	scanf ("%d", &i);

	printf ("SOLUTION \n\t (L=Left, R=Right, C=Center)\n");
	towersOfHanoi('1', '2', '3', i);	

	return 0;
}

/* function towersOfHanoi defintion */
void towersOfHanoi(char peg1, char peg2, char peg3, int i)
{
	if (i > 0) {

	   towersOfHanoi(peg1, peg3, peg2, i-1);
	   printf ("Move disk %d from  %c ----> %c\n ", i, peg1, peg2);
  	   towersOfHanoi(peg3, peg2, peg1, i-1);

	}
	return;

}

