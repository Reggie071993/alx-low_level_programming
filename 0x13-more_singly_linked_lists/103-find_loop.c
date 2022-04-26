#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the beginning of the list
* Return: address of the node where the loop starts or NULL if there's no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *reggie, *tina;

	reggie = tina = head;
	while (reggie && tina && tina->next)
	{
		reggie = reggie->next;
		tina = tina->next->next;
		if (reggie == tina)
		{
			reggie = head;
			break;
		}
	}
	if (!reggie || !tina || !tina->next)
		return (NULL);
	while (reggie != tina)
	{
		reggie = reggie->next;
		tina = tina->next;
	}
	return (tina);
}
