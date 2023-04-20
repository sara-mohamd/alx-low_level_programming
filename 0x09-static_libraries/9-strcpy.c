#include "main.h"

/**
 *   _sttrcpy - Copy a string
 *   @destt: Destination value
 *   @srct: Source value
 *   Return: the pointer to dest
 */

char *_sttrcpy(char *destt, char *srct)
{
int it;
for (it = 0; srct[i] != '\0'; i++)
{
destt[it] = srct[it];
}
destt[it++] = '\0';
return (destt);
}
