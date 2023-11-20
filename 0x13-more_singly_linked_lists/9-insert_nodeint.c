#include "ists.h"

/**
 * insert_nodeint_at_index - insert node at index position
 *
 * @head: pointer input to the list
 * @idx : index input
 * @n: int input
 *
 * Return: pointer
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *add = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !add)
		return (NULL);

	add->n = n;
	add->next = NULL;
	if (!idex)
	{
		add->next = *head;
		*head = add;
		return (add);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			add->next = node->next;
			node->next = add;
			return (add);
		}
		i++;
		node = node->next;
	}
	free(add);
	return (NULL);
}
