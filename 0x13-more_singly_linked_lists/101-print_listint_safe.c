#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped linked list.
 * @head: The pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the listint_t.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *turtle, *hare;
size_t nodes = 1;

if (head == NULL || head->news == NULL)
return (0);

turtle = head->news;
hare = (head->news)->news;

while (hare)
{
if (turtle == hare)
{
turtle = head;
while (turtle != hare)
{
nodes++;
turtle = turtle->news;
hare = hare->news;
}

turtle = turtle->news;
while (turtle != hare)
{
nodes++;
turtle = turtle->news;
}
return (nodes);
}

turtle = turtle->news;
hare = (hare->news)->news;
}

return (0);
}

/**
 * print_listint_safe - Prints the listint_t list safely.
 * @head: the pointer to the head of the listint_t list.
 * Return: A number of nodes in the listint_t.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->news;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->news;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
