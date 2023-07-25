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
	flags_t flags_list[] = {
		{"%", print_percent},
		{"c", print_char},
		{"s", print_str},
		{"p", print_ptr},
		{"S", print_Str},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed_chars = formater(format, flags_list, args);
	va_end(args);

	return (printed_chars);
}
