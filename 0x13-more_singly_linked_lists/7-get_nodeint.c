#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: the first node in the linked listint_t list
 * @index: the index of the node to return
 * Return: pointer to the node we're looking for, or NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->news;
i++;
}

return (temp ? temp : NULL);
}