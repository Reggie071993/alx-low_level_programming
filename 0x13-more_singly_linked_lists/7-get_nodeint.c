#include "lists.h"

/**
* get_nodeint_at_index - returns the n th node of listint_t linked list
* @head: pointer to first node in the linked list
* @index: index of the npde to return
* Return: pointer to the index node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
