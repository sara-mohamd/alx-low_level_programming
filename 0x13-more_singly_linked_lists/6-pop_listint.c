#include "lists.h"

/**
 * pop_listint - removes the linked list's head node
 * @head: pointer to the linked list's top-level element
 *
 * Return: the removed data included within the elements,
 * or 0 if there is no such list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
