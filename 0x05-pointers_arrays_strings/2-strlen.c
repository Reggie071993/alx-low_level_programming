#include "main.h"
/**
* _strlen - takes a pointer to anint as a parameter and 
* updates the value it points to to 98
* @s: chain of characters
*
* Return: 1 or 0
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
