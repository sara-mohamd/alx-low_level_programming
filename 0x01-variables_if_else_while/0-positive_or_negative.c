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
	int n;
scanf("%d", &n);
if (n > 0)
printf("is positive");
else if (n < 0)
printf("is negative");
else
printf("is zero");
srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
