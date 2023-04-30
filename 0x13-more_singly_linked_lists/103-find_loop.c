#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked listint_t list
 * @head: linked list to search for in the code
 * Return: the address of the node where the loop starts, or NULL if it fails
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *first = head;

if (!head)
return (NULL);

while (slow && first && first->next)
{
first = first->next->next;
slow = slow->next;
if (first == slow)
{
slow = head;
while (slow != first)
{
slow = slow->next;
first = first->next;
}
return (first);
}
}

return (NULL);
}
