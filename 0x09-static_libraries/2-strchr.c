#include "main.h"
#include <stddef.h>

/**
*_sttrchr - Returns a pointer to the first occurrence
*of the character cc in the string ss, or NULL if the
*character is not found
*
*@ss:string targeted
*@cc:character targeted
*
*Return: returns pointer to first occcurence of cc
*/
char *_sttrchr(char *ss, char cc)
{
	int ii;

	for (ii = 0; (ss[ii] != cc) && (ss[ii] != '\0'); ii++)
		;
	if (ss[ii] == cc)
		return (ss + ii);
	else
		return (NULL);
}
