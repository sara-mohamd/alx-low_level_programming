#include <unistd.h>

/**
 * _puutchar - writes the character c to stdout
 * @cc: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puutchar(char cc)
{
	return (write(1, &cc, 1));
}
