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
	unsigned long int num;
	int i, j = 0;
	char *n = "(nil)";

	v = va_arg(ptr, void*);
	if (v == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
			_putchar(n[i]);
		return (i);
	}

	num = (unsigned long int)v;
	_putchar('0');
	_putchar('x');
	if (num == 0)
	{
		_putchar('0');
		return (3);
	}
	while (num != 0)
	{
		unsigned long int calc = num % 16;
		char hex_digit = (calc < 10) ? ('0' + calc) : ('a' + calc - 10);

		_putchar(hex_digit);
		num /= 16;
		j++;
	}
	return (j + 2);
}
