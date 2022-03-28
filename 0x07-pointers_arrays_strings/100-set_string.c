#include <string.h>
#include "main.h"
/**
* set_string - a function that sets value of a pointer to char
* @s: pointer of char
* @to: string
* Return: 1 or 0
*/

void set_string(char **s, char *to)
{
	*s = to;
}
