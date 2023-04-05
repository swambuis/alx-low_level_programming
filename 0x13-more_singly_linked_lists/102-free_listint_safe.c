#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node
 * Return: number of elemebts in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int i;
	listint_t *exist;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			exist = (*h)->next;
			free(*h);
			*h = exist;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
