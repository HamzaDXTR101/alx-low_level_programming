#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a Function listint_t list
 * @head: First node in linked list
 *
 * Return: Resulting the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

