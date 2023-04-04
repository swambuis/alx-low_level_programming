#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first nide
 * @n: data to insert in new node
 * Return: NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnod;

	newnod = malloc(sizeof(listint_t));
	if (!newnod)
		return (NULL);
	newnod->n = n;
	newnod->next = *head;
	*head = newnod;
	return (newnod);
}
