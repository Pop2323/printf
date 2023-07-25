#include "main.h"

/**
 * print_ptr - func that print hex num
 *
 * @ptr: lists of args
 *
 * Return: return the hex num
 */

int print_ptr(va_list ptr)
{
	void *v;
	char *n = "(nil)";
	long int a;
	int j, i;

	v = va_arg(ptr, void*);
	if (v == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
		{
			_putchar(n[i]);
		}
		return (i);
	}

	a = (unsigned long int)v;
	_putchar('0');
	_putchar('x');
	j = print_hex_checker(a);
	return (j + 2);
}
