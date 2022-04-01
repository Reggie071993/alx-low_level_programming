#include<stdio.h>
#define UNUSED(x) (void)(x)
/**
* main - function
* @argv: pointer
* @argc: integer
* Return: 0.
*/

int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", argv[0]);

	return (0);
}
