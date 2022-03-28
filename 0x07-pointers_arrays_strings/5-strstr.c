#include "main.h"
#include <string.h>
/**
* compare - function that compares
* @X: string
* @Y: string
* Return: 1 or 0
*/

int compare(const char *A, const char *B)
{
	while (*A && *B)
	{
		if (*A != *B)
		{
			return (0);
		}
		A++;
		B++;
	}
	return (*B == '\0');
}

/**
* _strstr - a function that finds a substring
* @haystack: string
* @needle: string
* Return: 1 or 0
*/

char *_strstr(char *haystack, char *needle)
{
	int	i;

	i = 0;
	if (haystack[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
