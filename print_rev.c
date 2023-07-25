#include "main.h"

/**
 * print_rev - func that print the str in revesr
 *
 * @rev: list of args
 *
 * Return: return len of the rev str
*/


int print_rev(va_list rev)
{
	int i, j;
	char *str = va_arg(rev, char *);

	if (!str)
		str = "(null)";
	for (i = 0; s[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	return (i);
}
