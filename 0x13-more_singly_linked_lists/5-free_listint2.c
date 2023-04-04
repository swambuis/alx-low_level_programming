#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be made free
 */
void free_listint2(listint_t **head)
{
	listint_t *exist;

	if (head == NULL)
		return;
	while (*head)
	{
		exist = (*head)->next;
		free(*head);
		*head = exist;
	}
	*head = NULL;
}
