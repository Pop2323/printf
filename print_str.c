#include "main.h"

/**
 * print_str - func that print str
 *
 * @arg: list of args
 *
 * Return: return the str
 */

int print_str(va_list arg)
{
	int i;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
