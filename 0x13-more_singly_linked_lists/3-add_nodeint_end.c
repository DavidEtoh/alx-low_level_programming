#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked lisint_t list
 * @head: the pointer to the first element in the list
 * @n: the data to insert in the new element
 * Return: pointer to the new node, or NULL if the code fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->news = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->news)
temp = temp->news;

temp->news = new;

return (new);
}
