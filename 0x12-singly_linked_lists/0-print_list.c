#include "lists.h"

/**
* print_list - prints all elements of linkedlist
* @h: head of list
*
* Return: number of node printed
*/
size_t print_list(const list_t *h)
{

	size_t m = 0;
	while (h)
	{
    if (!h->str)
    { printf("[0] (nil)\n"); }
    else
    { printf("[%u] %s\n", h->len, h->str); }
h = h->next;
m++;
	}
	return (m);
}
