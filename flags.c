#include "main.h"

/**
 * flags - check the flag specifier
 *
 * @args: number of args
 * @params: the params chars
 * @format: the format specifier
 *
 * Return: return the flags char
*/

int flags(const char *format, va_list args, int params)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			params = printf_integer(args, params);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			params++;
			break;
		case 's':
			params = printf_str(args, params);
			break;
		case '%':
			_putchar('%');
			params++;
			break;
		case 'b':
			params = printf_binary(va_arg(args, unsigned int), params);
			break;
		case 'x':
		case 'X':
			params = _h(va_arg(args, unsigned int), params, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			params = printf_octal(va_arg(args, unsigned int), params);
			break;
		case 'u':
			params = printf_unsigned(va_arg(args, unsigned int), params);
			break;
		case 'r':
			params = printf_rev(args, params);
			break;
		case 'p':
			params = printf_ptr(args, params);
			break;
		default:
			break;
	}
	return (params);
}
