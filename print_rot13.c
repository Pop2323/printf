#include "main.h"

/**
 * print_rot13 - func that print str after rot13
 *
 * @arg: list of args
 *
 * Return: return the rot13 str
 */

int print_rot13(va_list arg)
{
	int i;
	int j;
	char *str;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == input[j])
			{
				_putchar(output[j]);
				break;
			}
		}
		if (j == 53)
			_putchar(str[i]);
	}
	return (i);
}
