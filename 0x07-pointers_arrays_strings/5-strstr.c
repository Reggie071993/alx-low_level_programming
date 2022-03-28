#include <string.h>
/**
* compare - function that compares
* @X: string
* @Y: string
* Return: 1 or 0
*/

int	compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

/**
* _strstr - a function that finds a substring
* @haystack: string
* @needle: string
* Return: pointer or NULL
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
