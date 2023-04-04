#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nod = 0;

	while (h)
	{
		nod++;
		h = h->next;
	}
	return (nod);
}

