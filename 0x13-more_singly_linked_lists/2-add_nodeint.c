#include "lists.h"

/**
 * add_nodeint - adds a new node to the linked list's starting point
 * @head: reference to the list's root node
 * @n: information to add to that new node
 *
 * Return: the new node's reference, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}
