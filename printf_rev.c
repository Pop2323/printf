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
	int len, i;

	char *str = va_arg(args, char *);

	for (len = 0; str[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		params++;
	}
}
