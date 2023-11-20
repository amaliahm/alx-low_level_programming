#include "lists.h"
#include <stdlib.h>


/**
 * find_listint_loop - find loop
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
