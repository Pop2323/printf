#include "main.h"

/**
 * print_char - func that will print char
 *
 * @args: list of args
 *
 * Return: return the printed char
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
