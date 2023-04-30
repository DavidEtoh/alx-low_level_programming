#include "lists.h"

/**
 * free_listint_safe - frees a linked listint_t list
 * @h: pointer to the first node in the linked listint_t list
 * Return: number of elements in the freed list in the code
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->news;
if (diff > 0)
{
temp = (*h)->news;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}
