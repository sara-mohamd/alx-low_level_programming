#include <stdio.h>
#include <stdlib.h>
/**
 * islower - check if c in lowercase or either
 *@c:an integer det the return
 * Description:using islower to det the state of c
 * Return: 0 or 1.
*/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
