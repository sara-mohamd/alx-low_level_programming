#include "main.h"


/**
 * _islowert - Checks for lowercase character
 * @ct: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int ct)

{

	if (ct >= 97 && ct <= 122)
	{

	return (1);
	}
	return (0);
}
