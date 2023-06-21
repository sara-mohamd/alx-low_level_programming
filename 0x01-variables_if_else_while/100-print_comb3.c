#include <stdio.h>
#include <stdlib.h>
/**
 * main - sequance of possible nums
 *
 * Description: using mainfunction
 * Return: 0
*/
int main(void)
{
for (int x = 0; x < 9; x++)
{
for (int j = 1; j <= 9; j++)
{
if (j > x)
{
putchar('0' + x);
putchar('0' + j);
}
if (j != 9 && x != 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
