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
scanf("%li", &n);
if (n > 0)
printf("%li is positive", n);
else if (n < 0)
printf("%li is negative", n);
else
printf("%li is zero", n);

	return (0);
}
