#include "lists.h"

/**
 * add_nodeint_end - add last node
 *
 * @head: pointer input to list
 * @n: integer input
 *
 * Return: poinetr
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !!add)
		return (NULL);
	add->next = NULL;
	add->n = n;
	if (!*head)
		*head = add;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = add;
	}
	return (add);
}
