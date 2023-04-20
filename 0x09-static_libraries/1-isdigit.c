#include "main.h"
/**
*_ifdigit - function that verifies if a  character is a digit or not
*@g: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _ifdigit(int g)
{
if ((g >= 48) && (g <= 57))
return (1);

return (0);
}
