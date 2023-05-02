#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
    listint_t *before = NULL;
    listint_t *temp = *head;
    listint_t *after = NULL;

    while (temp != NULL)
    {
        before = temp;
        temp = temp->next;
        after = temp->next;

        temp->next = before;
    }

    *head = before;

    return (*head);
}
