#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index
 * @head: pointer to first node
 * @index: index of temp to get
 *
 * Return: pointer to temp
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int v;

	for (temp = head, v = 0; temp && v < index; temp = temp->next, v++)
		;
	return (temp);
}
