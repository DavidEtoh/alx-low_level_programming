#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked listint_t list
 * @head: linked list to search for in the code
 * Return: the address of the node where the loop starts, or NULL if it fails
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

if (!head)
return (NULL);

while (slow && fast && fast->news)
{
fast = fast->news->news;
slow = slow->news;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->news;
fast = fast->news;
}
return (fast);
}
}

return (NULL);
}
