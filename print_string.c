#include "main.h"

/**
 * print_string - func that print str
 *
 * @args: list of args
 *
 * Return: return the str
 */

int print_string(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
