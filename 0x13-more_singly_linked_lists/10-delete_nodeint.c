#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL;
	listint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (head == NULL)
	{
		return (-1);
	}

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		prev = temp;

		if (temp == NULL)
		{
			return (-1);
		}
	}
	prev->next = temp->next;
	free(temp);

	return (1);
}