#include "lists.h"

/**
 * reverse_listint - Reverse a linked list
 * @head: Pointer To the First Node in The List
 *
 * Return: Pointer To The First Node in The New List
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}


