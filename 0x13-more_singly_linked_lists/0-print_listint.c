#include "lists.h"

/**
 * print_listint -  prints all elements of a linked list
 * @h: pointer to the head of the list_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t no = 0;
while (h)
{
no++;
printf("%d\n", h->n);
h = h->next;
}
return (no);
}
