#include "main.h"

/**
*  _strncpyt - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpyt`.
*@destt: buffer storing the string copy
*@srct:the source string
*@nt:max nummber of byte copied
*Return: returns
*/

char *_strncpyt(char *destt, char *srct, int nt)

{
	int it;

	for (it = 0; it < nt && srct[i] != '\0'; it++)
		destt[it] = srct[it];

	for ( ; it < nt; it++)
		destt[it] = '\0';

	return (destt);
}
