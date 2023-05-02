#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node starting at 0
 * @head: takes in struct listint_t *head
 * @index: takes in an index
 * Return: pointer to the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (NULL);
	}

	return (temp);
}
