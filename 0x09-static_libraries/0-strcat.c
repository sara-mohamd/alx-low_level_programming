#include "main.h"

/**
 *_sara - concatenates  the string pointed to by @scc to
 * the end of the string pointed to by @dog
 *@dog: String that will be appended
 *@scc: String to be concatenated upon
 *
 * Return: returns poiner to @dog
 */

char *_sara(char *dog, char *scc)
{

	int indox = 0, dost_len = 0;

	while (dog[indox++])
		dost_len++;

	for (indox = 0; scc[indox]; indox++)
		dog[dost_len++] = scc[indox];

	return (dog);
}
