#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocate memory
 *
 * @list: pointer input
 * @size: size input
 * @new: pointer input
 *
 * Return: pointer
*/

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listsint_t **add;
	size_t i;

	add = malloc(size * sizeof(listint_t));
	if (add == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		add[i] = list[i];
	add[i] = new;
	free(list);
	return (add);
}

/**
 * print_listint_safe - prints list
 *
 * @head: pointer input
 *
 * Return: size
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i, n = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (head == list[i])
			{
				printf("->[%p] %d\n", (void *)head, head->n);
				free(list);
				return (n);
			}
		}
		n++;
		list = _r(list, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (n);
}
