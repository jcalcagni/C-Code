/* Student poll program */
#include <stdio.h>
#define WEEKLY_PAY 40
#define SALARY_RANGE 10

main()
{
   int amount, level;

   int dollars[WEEKLY_PAY] = {1, 2, 6, 4, 8, 5, 9, 7, 8,
       10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
       5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
   int frequency[WEEKLY_PAY] = {0};

   for(answer = 0; amount <= WEEKLY_PAY - 1; amount++)
      ++frequency[dollars[answer]];

   printf("%s%17s\n", "Salary", "Frequency");

   for(level = 1; level <= SALARY_RANGE - 1; level++)
      printf("%6d%17d\n", level, frequency[level]);

   return 0;
}

