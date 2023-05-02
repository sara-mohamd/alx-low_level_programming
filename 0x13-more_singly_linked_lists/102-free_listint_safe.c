#include "lists.h"

/**
 * free_listint_safe - sets a linked list free
 * @h: pointer to the connected list's root node
 *
 * Return: elements in the freed list number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t var = 0;
	int v;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		v = *h - (*h)->next;
		if (v > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			var++;
		}
		else
		{
			free(*h);
			*h = NULL;
			var++;
			break;
		}
	}

	*h = NULL;

	return (var);
}
