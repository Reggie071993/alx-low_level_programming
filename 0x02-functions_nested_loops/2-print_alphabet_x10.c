
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* print_alphabet_X10 - repeats the print alphabet 10 times.
*
* Return: 0 on Success.
* On error, -1 is returned, and errno is set appropriately.
*/

void print_alphabet_X10(void)
{
        int i;
        char cmd[] = "gcc -Wall -pedantic -Werror -Wetra -std=gnu89 _putchar.c";
	char cmd[94] = "1-main.c 1-alphabet.c 1-alphabe && ./1.alphabet";

	strcpy(cmd, strcat(cmd, cmd2));
	for (i = 0; i <= 9; i++)
		system(cmd);
}
