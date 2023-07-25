#include "main.h"

/**
 * print_Str - func that print the Str
 *
 * @ap: list of arg
 *
 * Return: the length of the string
 */

int print_Str(va_list ap)
{
	register short len = 0;
	char *res, *s = va_arg(ap, char *);
	int calc = 0;

	if (!s)
		return (_puts(NULL_STR));
	for (; *s; s++)
	{
		if (checker(*s))
		{
			calc += _puts("\\x");
			res = flags(*s, 16, 0);
			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(*s);
	}
	return (len);
}

/**
 * checker - check if it char
 *
 * @c: entry char
 *
 * Return: return boolen value
 */

int checker(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * flags - func that turn on the data to str
 *
 * @num: the number value
 * @base: the base vaule
 * @lower: check the case of the char
 *
 * Return: return the res of the str
 */

char *flags(unsigned long int num, int base, int lower)
{
	static char *resualt;
	static char buffer[50];
	char *ptr;

	resualt = (lower)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = NUL;
	do {
		*--ptr = resualt[num % base];
		num /= base;
	} while (num);

	return (ptr);
}
