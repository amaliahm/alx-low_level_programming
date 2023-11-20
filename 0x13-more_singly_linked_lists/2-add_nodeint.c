#include "lists.h"

/**
 * add_nodeint - add head node
 *
 * @head: poinetr to list
 * @n: int input
 *
 * Return: pointer
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);
	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
