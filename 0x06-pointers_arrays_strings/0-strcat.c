#include "main.h"
/**
* _strcat - function
* @dest: character
* @src: character
* Return: 1 or 0
*/

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] && dest[a] != '\0')
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
