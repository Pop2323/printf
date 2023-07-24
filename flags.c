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
	if (*format == 'd' || *format == 'i')
{
	params = printf_int(args, params);
}
else if (*format == 'c')
	_putchar(va_arg(args, int));
	params++;
else if (*format == 's')
	params = printf_str(args, params);
else if (*format == '%')
	_putchar('%');
	params++;
else if (*format == 'b')
	params = printf_binary(va_arg(args, unsigned int), params);
else if (*format == 'x' || *format == 'X')
	params = _h(va_arg(args, unsigned int), params, (*format == 'X') ? 1 : 0);
else if (*format == 'o')
	params = printf_octal(va_arg(args, unsigned int), params);
else if (*format == 'u')
	params = printf_unsigned(va_arg(args, unsigned int), printed);
else if (*format == 'r')
	params = printf_rev(args, params);
else if (*format == 'p')
	params = printf_ptr(args, params);
else
{

}
return (params);
}
