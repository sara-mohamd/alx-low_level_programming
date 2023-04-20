#include <stdio.h>
#include "main.h"

/**
 * _strpbrkj - Entry point
 * @sj: input
 * @acceptj: input
 * Return: Always 0 (Success)
 */

char *_strpbrkj(char *sj, char *acceptj)
{
	int ij, nj;

	for (ij = 0; sj[ij] != '\0'; ij++)
	{
		for (nj = 0; acceptj[nj] != '\0'; nj++)
		{
			if (sj[ij] == acceptj[nj])
				return (sj + ij);
		}
	}

	return (NULL);
}
