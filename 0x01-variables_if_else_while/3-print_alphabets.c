#include <stdio.h>

/**
 * main -has codes prints alphabit in lowcase
 * Description: using main function
 * Return:0
*/

int main(void)
{
char i = 'a', v = 'A';
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (v = 'A'; v <= 'Z'; v++)
putchar(v);
putchar('\n');
return (0);
}
