#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'z';
	/* your code goes here */
	while (ch >= 'a')
	{
		putchar (ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
