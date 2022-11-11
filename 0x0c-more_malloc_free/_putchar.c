#include <unistd.h>

/**
 * _putchar - writes the character of c to stdout
 * @c: the character to print
 * Return: On success 1
 * On error, -1 is returned , and erroris set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
