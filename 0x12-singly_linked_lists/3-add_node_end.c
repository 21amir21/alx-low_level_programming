#include "list.h"
#include <string.h>

/**
 * _strlen - finds the length of a string
 * @str: string to find its length
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - adds a new node to the end of linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 *
 * Return: pointer to the end node.
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new_node;
	list_t *mr_robot;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	mr_robot = *head;

	while (mr_robot->next != NULL)
	{
		mr_robot = mr_robot->next;
	}

	mr_robot->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
