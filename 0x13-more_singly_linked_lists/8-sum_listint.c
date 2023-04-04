# include "lists.h"

/**
 * sum_listint - calculates sum of all data in a listint_t list
 * @head: first node in linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *exist = head;

	while (exist)
	{
		sum += exist->n;
		exist = exist->next;
	}
	return (sum);
}
