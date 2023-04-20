#include "main.h"

/**
  * _strcmpu - Compares two strings
  * @s1u: The first string
  * @s2u: The second string
  *
  * Return: int value
  */
int _strcmpu(char *s1u, char *s2u)
{
	int au = 0, bu = 0, cu = 0, ru = 0, limu;

	while (s1u[au])
	{
		au++;
	}

	while (s2u[bu])
	{
		bu++;
	}

	if (au <= bu)
	{
		limu = au;
	}
	else
	{
		limu = bu;
	}

	while (cu <= limu)
	{
		if (s1u[cu] == s2u[cu])
		{
			cu++;
			continue;
		}
		else
		{
			ru = s1u[cu] - s2u[cu];
			break;
		}

		cu++;
	}

	return (ru);
}
