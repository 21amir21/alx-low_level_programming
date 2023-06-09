#include "lists.h"

/**
 * add_nodeint_end - add node at end of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *tempNode = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
	}

	tempNode->next = newNode;

	return (newNode);
}
