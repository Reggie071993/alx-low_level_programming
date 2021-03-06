#include "lists.h"

/**
* sum_listint -fun that returns sum of all the data n of listint_t linked list
* @head: pointer to first node in the list
* Return: sum of all data n of listint_t linked list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
