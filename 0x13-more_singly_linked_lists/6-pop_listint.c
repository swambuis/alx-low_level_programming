#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to first element in linked list
 * Return: data inside the elements that was deleted or 0 if empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *exist;
	int no;

	if (!head || !*head)
		return (0);
	no = (*head)->n;
	exist = (*head)->next;
	free(*head);
	*head = exist;
	return (no);
}
