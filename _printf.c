#include "main.h"

/**
 * _printf - func that turn on the output and print the data
 * @format: the format specifier
 *
 * Return: return the specifier format and print data
 */

int _printf(const char *format, ...)
{
	int params = 0;

	va_list args;

	va_start(args, format);

for (; *format != '\0'; format++)
{
	if (*format == '%')
	{
		format++;
		params = flags(format, args, params);
	}
	else
	{
		_putchar(*format);
		params++;
	}
}
va_end (args);
return (params);
}
