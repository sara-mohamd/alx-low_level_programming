#include "lists.h"

/**
 * free_listint - sets a linked list free
 * @head: to liberate the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *term;

	while (head)
	{
		term = head->next;
		free(head);
		head = term;
	}
}
