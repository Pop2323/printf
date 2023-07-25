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
	char *str = va_arg(op, char *);

	if (!str)
		str = "(null)";
	while (str[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	return (i);
}
