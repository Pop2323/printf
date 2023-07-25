#include "main.h"

/**
 * _printf - func that turn on the output and print the data
 * @format: the format specifier
 *
 * Return: return the specifier format and print data
*/

int _printf(const char *format, ...)
{
	int printed_chars;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed_chars = formater(format, args);
	va_end(args);

	return (printed_chars);
}
