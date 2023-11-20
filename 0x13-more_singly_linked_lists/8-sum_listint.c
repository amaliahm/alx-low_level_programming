#include "lists.h"

/**
 * sum_listint - sum of values in the list
 *
 * @head: pointer input
 *
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
