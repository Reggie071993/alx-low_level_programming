#include "main.h"
/**
* _strncat - function
* @dest: character
* @src: character
* @n: the number
* Return: 1 or 0
*/

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
