#include "holberton.h"

/**
 * _printf - Funtion that print a argument string replacing the % variables
 * @format: string to print
 * Return: string lenght.
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, sum = 0;
	_spfc aux[] = { {"c", _print_c}, {"s", _print_s}, {"%", _print_percent},
			{"d", _print_d}, {"i", _print_i}, {NULL, NULL} };
	va_list arguments;

	va_start(argumentos, format);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (aux[j].s != NULL)
			{
				if (aux[j].s[0] == format[i + 1])
				{
					sum += aux[j].function(arguments);
					i++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			sum += 1;
		}
		i++;
		j = 0;
	}
	return (sum);
}
