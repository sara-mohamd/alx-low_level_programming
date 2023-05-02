#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pointer, *over;

	if (head == NULL)
		return (NULL);

	for (over = head->next; over != NULL; over = over->next)
	{
		if (over == over->next)
			return (over);
		for (pointer = head; pointer != over; pointer = pointer->next)
			if (pointer == over->next)
				return (over->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint list, even if it has a loop
 *
 * @h: head of list
 *
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *var, *v;
	size_t lens;
	int loops = 1;

	if (h == NULL || *h == NULL)
		return (0);

	v = find_listint_loop_fl(*h);
	for (lens = 0; (*h != v || loops) && *h != NULL; *h = var)
	{
		lens++;
		var = (*h)->next;
		if (*h == v && loops)
		{
			if (v == v->next)
			{
				free(*h);
				break;
			}
			lens++;
			var = var->next;
			free((*h)->next);
			loops = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (lens);
}
