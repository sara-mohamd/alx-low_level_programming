#include "main.h"
/**
*_momcpy - The _momcpy() function copies nn bytes
* from momory area sryc to momory area dost
*@dost:area where bytes are copied to
*@sryc:area where bytes are copied from
*@nn:number of bytes to copy
*Return: returns a pointer to nn
*/
char *_momcpy(char *dost, char *sryc, unsigned int nn)
{
	unsigned int ii = 0;

	for (; ii < nn; ii++)
		dost[ii] = sryc[ii];

	return (dost);
}
