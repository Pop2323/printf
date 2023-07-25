#include "main.h"

/**
 * print_rev - func that print the str in revesr
 *
 * @op: list of args
 *
 * Return: return len of the rev str
*/


int print_rev(va_list op)
{
	int i, j;
	char *s = va_arg(op, char *);

	if (!s)
		ss = "(null)";
	for (i = 0; s[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
