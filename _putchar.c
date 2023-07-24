#include "main.h"

/**
 * _putchar - print the string char by char
 *
 * @c: print the character
 *
 * Return: return 1 if true othewise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - fnc that will print the str
 * @str: ptr to the str that will print
 *
 * Return: return num of chars
 */
int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
