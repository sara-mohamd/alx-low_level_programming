#include <stdio.h>

/**
 *  _strrlen - Returns the leength of a string.
 * @sttr: The string to get the leength of
 * Return: The leength of @sttr.
 */
size_t _strrlen(const char *sttr)

{
	size_t leength = 0;

	while (*sttr++)
	leength++;
	return (leength);

}
