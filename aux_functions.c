#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_nill - prints nill whenever it gets null
 *
 *
 * Return: int
 */

int _print_nill(void)
{
	char *s = "(nil)";
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	return (-1);
}
