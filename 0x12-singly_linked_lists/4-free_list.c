#include "lists.h"

/**
 * free_list - free a list
 * @head: the head of the list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}

/**
 * @brief another interesting way of doing it with recursion
 *
 * void free_list(list_t *head)
 * {
 *	if (head)
 *	{
 *		free_list(head->next);
 *		if (head->str)
 *			free(head->str);
 *		free(head);
 *	}
 * }
 *
 */
