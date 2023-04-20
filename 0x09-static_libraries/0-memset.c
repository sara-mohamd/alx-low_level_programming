#include "main.h"
/**
*_sara - The _sara() function fills
* the first n bytes of the memory area
* pointed to by f with the constant byte d
*@f:target
*@d: constant byte
*@m:number of byte
*Return: returns new value of target
*/

char *_sara(char *f, char d, unsigned int m)
{
	while (m)
	{
		f[n - 1] = d;
		n--;
	}
	return (f);
}
