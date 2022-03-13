#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a = 49;
	int b = 48;
	int position_a = 49;
	/* your code goes there */
	while (b <= 56)
	{
		while (a <= 57)
		{
			putchar (b);
			putchar (a);
			if (b != 56 || a != 57)
			{
				putchar (',');
				putchar (' ');
			}
			a++;
		}
		b++;
		position_a++;
		a = position_a;
	}
	putchar('\n');
	return (0);
}
