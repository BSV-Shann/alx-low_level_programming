#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the beginning of the list.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	/* Traverse the list and free each node */
	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
