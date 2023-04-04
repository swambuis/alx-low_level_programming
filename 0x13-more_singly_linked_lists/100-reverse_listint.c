#include "lists.h"

/**
 * *reverse_listint -  reverses a listint_t linked list
 * @head: pointer to first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}
	*head = before;
	return (*head);
}
