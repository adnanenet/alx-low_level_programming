#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sume = 0;

	while (head != NULL)
	{
		sume += head->n;
		head = head->next;
	}
	return (sume);
}
