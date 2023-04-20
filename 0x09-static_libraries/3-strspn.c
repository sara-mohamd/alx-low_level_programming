#include "main.h"

/**
 * _strspnk - Entry point
 * @sk: input
 * @acceptk: input
 * Return: Always 0 (Success)
 */

unsigned int _strspnk(char *sk, char *acceptk)
{
	unsigned int ik, nk, valuek, checkk;

	valuek = 0;

	for (ik = 0; sk[ik] != '\0'; ik++)
	{
		checkk = 0;

		for (nk = 0; acceptk[nk] != '\0'; nk++)
		{
			if (acceptk[nk] == sk[ik])
			{
				valuek++;
				checkk = 1;
			}
		}

		if (checkk == 0)
			return (valuek);
	}

	return (valuek);
}
