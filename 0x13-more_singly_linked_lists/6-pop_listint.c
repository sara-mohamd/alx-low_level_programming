#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: address of pointer to first node
 *
 * Return: value of popped temp
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int v;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	v = (*head)->v;
	free(*head);
	*head = temp;
	return (v);
}
