#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at beginning of a listint_t list.
 *
 * @head: pointer to pointer to head node
 * @n: int add the list
 * Return: NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = head;
	head = newNode;

	return (newNode);
}
