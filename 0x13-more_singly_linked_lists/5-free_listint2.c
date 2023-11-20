#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: pointer input
 *
 * Return: nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *p;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		p = node;
		node = node->next;
		free(p);
	}
	*head = NULL;
}
