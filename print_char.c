#include "main.h"

/**
 * print_char - func that will print char
 *
 * @arg: list of args
 *
 * Return: return the printed char
 */

int print_char(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
