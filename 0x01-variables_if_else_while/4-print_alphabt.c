#include <stdio.h>
#include <stdlib.h>

/**
 * main -has codes prints alphabit in lowcase
 * Description: using main function
 * Return:0
*/

int main(void)
{
char i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e' || i != 'q')
putchar(i);
}
putchar('\n');
return (0);
}
