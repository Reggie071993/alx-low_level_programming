#include "lists.h"

#include <stdlib.h>

/**
* delete_nodeint_at_index - fun that deletes node at index
* of a listint_t linked list
* @head: double pointer to first node the list
* @index: index of the node to be deleted
* Return: 1 if was deleted and -1 if dont was deleted
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int i;
	listint_t *tmp;

	for (i = -1; *head != NULL; i++)
	{
		if (i + 1 == (int) index)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			return (1);
		}

		head = &(*head)->next;
	}

	return (-1);
}
