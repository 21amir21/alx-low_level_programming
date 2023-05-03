#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;

	unsigned int i;

	listint_t *temp = *head;

	if (*head == NULL || head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		if (*head != NULL)
		{
			newNode->next = *head;
		}
		*head = newNode;
	}
	else if (idx > listint_len(*head))
	{
		return (NULL);
	}
	else
	{
		for (i = 1; i < idx; i++)
		{
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
