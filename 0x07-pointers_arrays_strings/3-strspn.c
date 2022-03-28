#include "main.h"
#include <string.h>
/**
* _strspn - function that gets the length of a prefix substring
* @s: ponter to string
* @accept: string
* Return: 1 or 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] && strchr(accept, s[i]))
		i++;
	return (i);
}
