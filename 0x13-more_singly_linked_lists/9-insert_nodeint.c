#include "lists.h"

/**
 * insert_nodeint_at_index - a new node is added to a linked list,
 * at a specific location
 * @head: reference to the list's root node
 * @idx: index where the new node is added, or index
 * @n: data information to add to the new node
 *
 * Return: the new_nodes node's pointer, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int v;
	listint_t *new_nodes;
	listint_t *term = *head;

	new_nodes = malloc(sizeof(listint_t));
	if (!new_nodes || !head)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (idx == 0)
	{
		new_nodes->next = *head;
		*head = new_nodes;
		return (new_nodes);
	}

	for (v = 0; term && v < idx; v++)
	{
		if (v == idx - 1)
		{
			new_nodes->next = term->next;
			term->next = new_nodes;
			return (new_nodes);
		}
		else
			term = term->next;
	}

	return (NULL);
}
