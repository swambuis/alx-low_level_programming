#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to first element
 * @index: index of node to delete
 * Return: 1 (Success) or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *exist = *head;
	listint_t *recent = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(exist);
		return (1);
	}
	while (i < index - 1)
	{
		if (!exist || !(exist->next))
			return (-1);
		exist = exist->next;
		i++;
	}
	recent = exist->next;
	exist->next = recent->next;
		free(recent);
		return (1);
}
