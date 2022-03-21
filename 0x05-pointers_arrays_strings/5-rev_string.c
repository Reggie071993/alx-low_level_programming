#include "main.h"
/**
* rev_string - takes a pointer to an int as parameter and
* @s: chain of characters
*
* Return: 1 or 0
*/

void rev_strings(char *s)
{
	int i, x, y;
	char c;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	y = x - i;
	for (i = 0; i < x / 2; i++)
	{
		c = s[i];
		s[i] = s[y];
		s[y--] = c;
	}
}
