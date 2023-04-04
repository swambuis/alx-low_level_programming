#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in liked list at a given position
 * @head: pointer to first node in list
 * @idx: where new node is added
 * @n: data to insert in new node
 * Return: pointer to new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnod, *exist;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		exist = *head;
		for (i = 0; i < idx - 1 && exist != NULL; i++)
		{
			exist = exist->next;
		}
		if (exist == NULL)
			return (NULL);
	}
	newnod = malloc(sizeof(listint_t));
	if (newnod == NULL)
		return (NULL);
	newnod->n = n;
	if (idx == 0)
	{
		newnod->next = *head;
		*head = newnod;
		return (newnod);
	}
	newnod->next = exist->next;
	exist->next = newnod;
	return (newnod);
}

