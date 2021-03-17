#include "holberton.h"

/**
* _print_c - prints characters.
*
* @arguments: arguments taken by the function.
*
* Return: Returns number of characters.
*/

int _print_c(va_list arguments)
{
	char c = va_arg(arguments, int);

	if (c == '\0')
	{
		return (1);
	}
	_putchar(c);
	return (1);
}

/**
* _print_s - prints strings.
* @arguments: Arguments taken by the function.
* Return: Returns number of characters printed.
*/


int _print_s(va_list arguments)
{
	int len;
	char *c = va_arg(arguments, char *);

	if (c == NULL)
		c = "(null)";
	for (len = 0; c[len] != '\0'; len++)
	{
		_putchar(c[len]);
	}
	return (len);
}

/**
* _print_percent - prints the percent sign.
*
* @arguments: argumentos.
* Return: Returns number of characters.
*/

int _print_percent(__attribute__((unused))va_list arguments)
{

	_putchar('%');
	return (1);
}

/**
* _print_d - prints a integer base 10.
*
* @arguments: input arguments with the number.
* Return: Returns number of characters.
*/

int _print_d(va_list arguments)
{
	int n = va_arg(arguments, int), reversed = 0, len = 0;
	char lastDigit;

	if (n == '\0')
	{
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		lastDigit = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		lastDigit = (char)((n % 10) + '0');
		n /= 10;
	}
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		_putchar((char)((reversed % 10) + '0'));
		len++;
		reversed /= 10;
	}
	_putchar(lastDigit);
	return (len + 1);
}

/**
* _print_i - prints integers.
*
* @arguments: argument with the int to be printed.
* Return: Returns number of characters.
*/

int _print_i(va_list arguments)
{
	int n = va_arg(arguments, int), reversed = 0, len = 0;
	char lastDigit;

	if (n == '\0')
	{
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		lastDigit = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		lastDigit = (char)((n % 10) + '0');
		n /= 10;
	}
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		_putchar((char)((reversed % 10) + '0'));
		len++;
		reversed /= 10;
	}
	_putchar(lastDigit);
	return (len + 1);
}
