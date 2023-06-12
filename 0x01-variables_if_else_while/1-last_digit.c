#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - read number and return last digit
 *
 * description: using main function
 *
 * Return: 0
 */

int main(void)
{
int n, p;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

scanf("%d", &n);
p = n % 10;
if (p > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, p);
else if (p < 6 && p > 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
else
printf("Last digit of %d is %d and is 0\n", n, p);
return (0);
}
