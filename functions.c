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
 * _print_nill
 * @brief
 *
 * @return int
 */

int _print_nill(void)
{
	char *s = "(nil)";
	int len = 0;
  
	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	return (len);
}

/**
 * @brief 
 * 
 * @param argumentos 
 * @return int 
 */

int _print_c(va_list argumentos)
{
	char c = va_arg(argumentos, int);
	_putchar(c);
	return (1);
}

/**
 * @brief 
 * 
 * @return int 
 */


int _print_s(va_list argumentos)
{
	int len;
	char *c = va_arg(argumentos, char *);
  
	if (c == NULL)
		c = "(nil)";  
	for (len = 0; c[len] != '\0'; len++)
	{
		_putchar(c[len]);
	}
	return (len);
}

/**
 * @brief 
 * 
 * @param argumentos 
 * @return int 
 */

int _print_percent(va_list argumentos)
{
	int len;
	char c = va_list(argumentos, char);

	if (c == NULL)
	{
		len = _print_nill();
		return (len);
	}
	_putchar(c);
	return (1);
}

/**
 * @brief 
 * 
 * @param argumentos 
 * @return int 
 */

int _print_d(va_list argumentos)
{
	int n = va_arg(argumentos, int), reversed = 0, len = 0;  
	char lastDigit;

	if (n ==\0)
	{
		len = _print_nill();
		return (len);
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
 * @brief 
 * 
 * @param argumentos 
 * @return int 
 */

int _print_i(va_list argumentos)
{
	int n = va_arg(argumentos, int), reversed = 0, len = 0;  
	char lastDigit;

	if (n == 0)
	{
		len = _print_nill();
		return (len);
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
 * @brief 
 * 
 * @param argumentos 
 * @return int 
 */
int _print_u(va_list argumentos)
{
	unsigned int n;
	int div;
	int len;
	int length;
    
	n  = va_arg(argumentos, unsigned int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		return (NULL);
	}
	else
	{    

		while (n / div > 9)
		{
			div *= 10;
		}

		while (div != 0)
		{
			len += _putchar('0' + n / div);
			n %= div;
			div /= 10;
		}

	}
	length = (len / 48);
    
	return (length);

}
