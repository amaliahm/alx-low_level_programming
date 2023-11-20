#include "lists.h"

/**
 * listint_len - prints linked list
 *
 * @h: pointer to the list's head
 *
 * Return:  size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
