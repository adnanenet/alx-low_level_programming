#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a dlistint_t listing
 * @head: pointer to the beginning of the linked listing
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nex;

	while (head != NULL)
	{
		nex = head->next;
		free(head);
		head = nex;
	}
}
