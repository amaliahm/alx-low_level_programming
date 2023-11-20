#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: poinetr input
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
