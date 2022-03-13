#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a = 50;
	int b = 49;
	int c = 48;
	int position_a = a;
	int position_b = b;
	int position_aa = a;
	/* your code goes there */
	while (c <= 55)
	{
		while (b <= 56)
		{
			while (a <= 57)
			{
				putchar (c);
				putchar (b);
				putchar (a);
				if (c != 55 || b != 56 || a != 57)
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
		position_a = position_aa;
		position_a++;
		position_aa++;
		a = position_a;
		position_b++;
		b = position_b;
		c++;
	}
	putchar('\n');
	return (0);
}
