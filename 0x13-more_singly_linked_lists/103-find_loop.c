#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point, *i;

	if (head == NULL)
		return (NULL);
	for (i = head->next; i != NULL; i = i->next)
	{
		if (i == i->next)
			return (i);
		for (point = head; point != i; point = point->next)
			if (point == i->next)
				return (i->next);
	}

	return (NULL);
}
