#include "main.h"

/**
 * _putts - Prints a string
 * @strt: The string to print
 * Return: void
 */

void _putts(char *strt)

{
	for (; *strt != '\0'; strt++)
	{
	_putchar(*strt);
	}
	_putchar('\n');
}
