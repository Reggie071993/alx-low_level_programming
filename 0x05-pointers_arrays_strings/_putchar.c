#include <unistd.h>
/**
* _putchar - writes character c to stdout
* @c: The character 
*
* Return: 1 On Success
* On error, return -1
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
