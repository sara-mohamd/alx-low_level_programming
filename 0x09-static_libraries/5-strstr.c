#include <stdio.h>
#include "main.h"

/**
 * _strstrt - Entry point
 * @haystackt: input
 * @needlet: input
 * Return: Always 0 (Success)
 */
char *_strstrt(char *haystackt, char *needlet)
{
	for (; *haystackt != '\0'; haystackt++)
	{
		char *onet = haystackt;
		char *twot = needlet;

		while (*onet == *twot && *twot != '\0')
		{
			onet++;
			twot++;
		}

		if (*twot == '\0')
			return (haystackt);
	}

	return (NULL);
}
