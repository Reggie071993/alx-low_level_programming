#include "main.h"
/**
* *_strpbrk - function that searches string for any of set of bytes
* @s: string
* @accept: string
* return: 1 or 0
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
