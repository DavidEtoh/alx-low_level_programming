#include "lists.h"

/**
 * reverse_listint - reverses a linked listint_t list
 * @head: the pointer to the first node in the listint_t
 * Return: the pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *news = NULL;

while (*head)
{
news = (*head)->news;
(*head)->news = prev;
prev = *head;
*head = news;
}

*head = prev;

return (*head);
}
