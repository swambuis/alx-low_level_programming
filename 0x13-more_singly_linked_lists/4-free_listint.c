#include "lists.h"

/**
 * free_listint - frees linked list
 * @head: listint_t list to be made free
 */
void free_listint(listint_t *head)
{
	listint_t *exist;

	while (head)
	{
		exist = head->next;
		free(head);
		head = exist;
	}
}
