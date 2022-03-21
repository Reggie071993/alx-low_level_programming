#include "main.h"
/**
* rev_string - takes a pointer to an int as parameter and
* @s: chain of characters
*
* Return: 1 or 0
*/

void rev_strings(char *s)
{
	int i = 0, taille, k;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	taille = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[taille];
		s[taille] = c;
		i++;
		taille--;
	}
}
