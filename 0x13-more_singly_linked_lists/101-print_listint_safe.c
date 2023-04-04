#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts unique nodes number
 * @head: pointer to the head
 * Return: if list is not looped - 0
 * Otherwise - number of unique nodes in list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *list1, *list2;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	list1 = head->next;
	list2 = (head->next)->next;

	while (list2)
	{
		if (list1 == list2)
		{
			list1 = head;
			while (list1 != list2)
			{
				nod++;
				list1 = list1->next;
				list2 = list2->next;
			}
			list1 = list1->next;
			while (list1 != list2)
			{
				nod++;
				list1 = list1->next;
			}
			return (nod);
		}
		list1 = list1->next;
		list2 = (list2->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t safely
 * @head: pointer to the head
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, index = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nod; index++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
					head = head->next;
		}
					printf("->[%p]%d\n", (void *)head, head->n);
						}
						return (nod);
						}
		
