#include "lists.h"

/**
 * get_nodeint_at_index - get node of index
 *
 * @head: pointer input
 * @index: int input
 *
 * Return: pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; (*node && i < index); node = node->next, n++)
		;
	return (node);
}
