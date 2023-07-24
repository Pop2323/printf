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
		{"d", print_int},
		{"i", print_int},
		{"c", print_char},
		{"s", print_str},
		{"u", print_unsigned_integer},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"S", print_Str},
		{"p", print_ptr},
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
