#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: the pointer to the first element in the listint_t
 * @index: the index of the node to delete
 * Return: 1 if is (Success), or -1 if it (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->news;
free(temp);
return (1);
}

while (i < index - 1)
{
if (!temp || !(temp->news))
return (-1);
temp = temp->news;
i++;
}


current = temp->news;
temp->news = current->news;
free(current);

return (1);
}
