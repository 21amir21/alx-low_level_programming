#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}

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
	listint_t *newNode = malloc(sizeof(listint_t));

	unsigned int i = 0;

	listint_t *temp = *head;

	newNode->n = n;

	if (*head == NULL || head == NULL)
		return (NULL);
	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
	{
		if (*head != NULL || head != NULL)
		{
			newNode->next = *head;
		}
		*head = newNode;
	}
	else if (idx > listint_len(*head) || idx < i)
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
