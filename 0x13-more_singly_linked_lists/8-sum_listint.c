#include "lists.h"

/**
 * sum_listint - sums up all the information in a listint_t list
 * @head: initial node of a linked list
 *
 * Return: resultant amount
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *t = head;

	while (t)
	{
		total += t->n;
		t = t->next;
	}

	return (total);
}
