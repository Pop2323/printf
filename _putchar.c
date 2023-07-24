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
