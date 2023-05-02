#include "lists.h"

/**
 * add_nodeint_end - ends a linked list with an additional node
 * @head: pointer to the list's top element
 * @n: information to add to the new element
 *
 * Return: the new node's reference, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes;
	listint_t *term = *head;

	new_nodes = malloc(sizeof(listint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	while (term->next)
		term = term->next;

	term->next = new_nodes;

	return (new_nodes);
}
