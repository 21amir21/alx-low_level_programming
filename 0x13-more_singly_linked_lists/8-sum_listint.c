#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: total sum of all the n in the linked list
 */

int sum_listint(listint_t *head)
{
	int totalSum = 0;
	listint_t *temp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		totalSum += temp->n;
		temp = temp->next;
	}

	return (totalSum);
}
