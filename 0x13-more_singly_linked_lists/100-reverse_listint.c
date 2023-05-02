#include "lists.h"

/**
 * reverse_listint - reverses an int list
 * @head: address of pointer to first node
 *
 * Return: address of head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *var = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	var = *head;
	*head = NULL;
	while (node)
	{
		next = var->next;
		var->next = *head;
		*head = var;
		var = next;
	}
	return (*head);
}
