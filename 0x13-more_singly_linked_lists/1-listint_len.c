
#include "lists.h"

/**
 * listint_len - return number of elements in a linked lists
 * @h: The type of linked list listint_t to traverse
 * Return: number of nodes to print
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
