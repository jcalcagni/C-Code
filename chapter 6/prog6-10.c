/* Student poll program */
#include <stdio.h>
#include <math.h>
#define WEEKLY_PAY 40
#define SALARY_RANGE 10

int roundArray(int [], int);

main()
{
   int amount, level;

/*   int dollars[WEEKLY_PAY] = {1, 2, 6, 4, 8, 5, 9, 7, 8,
       10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
       5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10}; */

   int dollars[WEEKLY_PAY] = {200, 370, 700, 500, 900, 600, 1000, 800, 900,
       1000, 200, 700, 498, 900, 700, 1000, 400, 900, 300, 800, 700, 600, 800, 700, 900, 700, 800, 
       600, 700, 700, 600, 700, 800, 600, 700, 500, 900, 700, 900, 1000};

   int frequency[SALARY_RANGE] = {0};

	roundArray(dollars, WEEKLY_PAY);  /* round array of weekly salaries to lowest $100 */	


   for(amount = 0; amount <= WEEKLY_PAY - 1; amount++)
      ++frequency[dollars[amount]];

   printf("%6s\t%s\n", "Salary", "Number of Reps");

   for(level = 2; level <= SALARY_RANGE; level++)
      printf("$%d-$%d\t%d\n", level * 100, level * 100 + 99, frequency[level * 100]);

   return 0;
}

int roundArray (int b [], int size)
{
	int i;

	for(i = 0; i <= size - 1; i++)
          b[i] = floor(b[i] / 100) * 100; 

}

