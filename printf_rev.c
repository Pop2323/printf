#include "main.h"

/**
 * printf_rev - func that reverse the num
 *
 * @args: the num of args
 * @params: the params char
 *
 * Return: returns the num of chars that were params
*/

int printf_rev(va_list args, int params)
{
	int len = 0, i;

	char *str = va_arg(args, char *);

	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		printed++;
	}
	return (printed);
}
