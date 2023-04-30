#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked listint_t list
 * @head: the pointer to the first node in the listint_t
 * @n: the data to insert in that new node
 * Return: pointer to the new node, or NULL if the code fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->news = *head;
*head = new;

return (new);
}
