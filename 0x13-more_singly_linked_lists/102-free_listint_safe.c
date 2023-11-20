#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds loop in linked list
 *
 * @head: pointer input
 *
 * Return: pointer
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}


/**
 * free_listint_safe - free list safe
 *
 * @h: pointer input
 *
 * Return: size
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *node;
	size_t len;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);
	node = find_listint_loop(*h);
	for (len = 0; (*h != node || i) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == node && i)
		{
			if (node == node->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
