#include "main.h"

/**
 * formater - func that print the foramted str
 *
 * @format: str that have all the needed char
 * @flags_list: arr that have all the args
 * @args: container that have all args that passed
 *
 * Return: A total count of the characters printed.
*/

int formater(const char *format, flags_t flags_list[], va_list args)
{
	int i, j, val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; flags_list[j].main != NULL; j++)
			{
				if (format[i + 1] == flags_list[j].main[0])
				{
					val = flags_list[j].f(args);
					if (val == -1)
						return (-1);
					printed_chars += val;
					break;
				}
			}
			if (flags_list[j].main == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
