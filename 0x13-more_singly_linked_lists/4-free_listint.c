#include "lists.h"

/**
 * free_listint - frees a linked listint_t list
 * @head: listint_t list to be freed when done
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
