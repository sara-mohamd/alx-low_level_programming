#include "lists.h"

/**
 * add_nodeint_end - adds a node to the bottom
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes = malloc(sizeof(listint_t));
	listint_t *temps;

	if (!head || !new_nodes)
		return (NULL);

	new_nodes->next = NULL;
	new_nodes->n = n;
	if (!*head)
		*head = new_nodes;
	else
	{
		temps = *head;
		while (temps->next)
			temps = temps->next;
		temps->next = new_node;
	}
	return (new_nodes);
}
