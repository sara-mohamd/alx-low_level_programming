#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Determine if the number  positive or either
 *
 * to the variable each time it executed
 *
 * Description : using main function
 * Return: 0
*/

int main(void)
{
	long int n;
scanf("%d", &n);
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
