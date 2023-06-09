#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of element in the linked list_t list.
 * @h: pointer to the list_h list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
