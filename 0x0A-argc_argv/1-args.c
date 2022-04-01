#include<stdio.h>
#define UNUSED(x) (void)(x)
/**
* main - function
* @argv: pointer
* @argc: integer
* Return: 0
*/

int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
