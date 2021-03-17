#include "holberton.h"

/**
 * _print_b - Prints a binary base number from a decimal base.
 * @argument: entry argument with the decimal number
 * Return: number of character printed
 */
int _print_b(va_list argument)
{
	int binary[32], len = 0, j;
	int n = va_arg(argument, int);

	if (n == '\0')
	{
		_putchar(' ');
		return (1);
	}
	while (n > 0)
	{
		binary[len] = n % 2;
		n /= 2;
		len++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar('0' + binary[j]);
	}
	return (len);

}
