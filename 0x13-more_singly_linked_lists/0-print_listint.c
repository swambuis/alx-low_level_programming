#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all elements of a linked list
 * @h: pointer to the head of the list_t list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
i++;
}
return (i);
}
