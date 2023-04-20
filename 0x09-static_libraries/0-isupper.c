#include "main.h"
/**
*_sara - function that verifies if a  character is uppercase or not
*@s: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _sara(int s)
{
	if ((s >= 'A') && (s <= 'Z'))
		return (1);

	return (0);
}
