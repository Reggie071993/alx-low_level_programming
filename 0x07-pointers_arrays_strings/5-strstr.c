#include "main.h"
#include <string.h>
/**
* compare - function that compares
* @A: string
* @B: string
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
* Return: pointer or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i]
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
