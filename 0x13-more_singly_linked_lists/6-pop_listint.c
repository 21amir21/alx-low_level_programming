#include "lists.h"

/**
 * pop_listint - function that deletes the head node & returns its data
 * @head: pointer to a pointer
 * Return: n, head's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (head == NULL)
	{
		return (0);
	}

	if (*head == NULL)
	{
		return (0);
	}

	(*head) = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
