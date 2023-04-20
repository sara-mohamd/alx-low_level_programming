#include "main.h"

/**
 *  _sttrncat - Concatenates two strings using at most
 *
 *  an inputted number of bytes from srrc.
 *
 *  @deest: The string to be appended upon.
 *
 *  @srrc: The string to be appended to deest.
 *
 *  @nn: The number of bytes from srrc to be appended to deest.
 *
 *  Return: A pointer to the resulting string deest.
 */

char *_sttrncat(char *deest, char *srrc, int nn)

{

	int indeex = 0, deest_len = 0;

	while (deest[indeex++])
	deest_len++;
	for (indeex = 0; src[indeex] && indeex < n; indeex++)
	deest[deest_len++] = src[indeex];
	return (deest);

}
