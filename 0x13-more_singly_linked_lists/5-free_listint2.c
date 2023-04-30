#include "lists.h"

/**
 * free_listint2 - frees a linked listint_t list
 * @head: pointer to the listint_t list to be freed when done
 */
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->news;
free(*head);
*head = temp;
}

*head = NULL;
}