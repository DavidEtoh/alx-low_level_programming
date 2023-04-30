#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer to the first element in the linked listint_t list
 * Return: the data inside the elements that was deleted,
 * or 0 if the listin the code is empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->news;
free(*head);
*head = temp;

return (num);
}
