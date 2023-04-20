#include "main.h"

/**
 * _isalphak - Checks for alphabetic character
 * @ck: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalphak(int ck)

{

	if ((ck >= 65 && ck <= 90) || (ck >= 97 && ck <= 122))
	{
	return (1);
	}
	return (0);
}
