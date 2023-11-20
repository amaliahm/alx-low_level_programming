#include "lists.h"

/**
 * delete_nodeint_at_index - delete the index node
 *
 * @head: pointer input
 * @index: int input
 *
 * Return: 1 in success, -1 in failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *p;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			p->next = node->next;
			free(node);
			return (1);
		}
		i++;
		p = node;
		node = node->next;
	}
	return (-1);
}
