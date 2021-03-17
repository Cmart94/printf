#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct spfc - _pritnf specifiers input type data
 * @s: specifier type. s, i, d, f, c, b, u...
 * @function: trigger function for the right specifier.
 */
struct spfc
{
	char *s;
	int (*function)(va_list);
};

typedef struct spfc _spfc;
int _printf(const char *format, ...);
int _print_nill(void);
int _print_c(va_list argumentos);
int _print_s(va_list argumentos);
int _print_percent(va_list argumentos);
int _putchar(char c);
int _print_d(va_list argumentos);
int _print_i(va_list argumentos);
int _print_b(va_list argument);

#endif /* HOLBERTON_H_ */
