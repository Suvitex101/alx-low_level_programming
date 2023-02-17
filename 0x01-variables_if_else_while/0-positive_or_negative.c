#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point*
 *
 * Return:always return 0
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
printf("%d is zero\n", n);

else if (n < 0)
printf("%d is negative\n", n);

else
printf("%d is positive\n", n);

return (0);
}
