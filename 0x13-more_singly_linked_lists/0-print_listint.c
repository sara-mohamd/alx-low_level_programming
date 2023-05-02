#include "lists.h"

/**
 * print_listint - a linked list's whole elements are printed
 * @m: to print a linked list of listint_t type
 *
 * Return: number amount of nodes
 */
size_t print_listint(const listint_t *m)
{
	size_t numbre = 0;

	while (m)
	{
		printf("%d\n", m->n);
		number++;
		m = m->next;
	}

	return (number);
}
