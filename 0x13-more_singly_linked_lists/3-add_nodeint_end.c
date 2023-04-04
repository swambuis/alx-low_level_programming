#include "lists.h"

/**
 * add_nodeint_end - adds node at end of linked list
 * @head: pointer to the first element in list
 * @n: data to insert in new element
 * Return: NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnod;
	listint_t *exist = *head;

	addnod = malloc(sizeof(listint_t));
	if (!addnod)
		return (NULL);
	addnod->n = n;
	addnod->next = NULL;
	if (*head == NULL)
	{
		*head = addnod;
		return (addnod);
	}
	while (exist->next)
		exist = exist->next;
	exist->next = addnod;
	return (addnod);
}
