#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 * Return: pointer to node we are searching or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *exist = head;

	while (exist && j < index)
	{
		exist = exist->next;
		j++;
	}
	return (exist ? exist : NULL);
}
