#include "main.h"

/**
 * _len - func that calc the bin base
 *
 * @num: The num of char len
 * @base: the base that divide by the num value
 *
 * Return: return the len of the int value
 */

unsigned int _len(unsigned int num, int base)
{
	unsigned int i = 0;

	while (num > 0)
	{
		num = num / base;
		i++;
	}
	return (i);
}

/**
 * rev_str - func that rev the str
 *
 * @s: turn on str
 *
 * Return: return a char ptr
 */
char *rev_str(char *s)
{
	int i = 0;
	char *dest;
	char tmp;
	int len = 0;

	while (s[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	i = 0;
	while (i < len)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[i];
		dest[i] = tmp;
		i++;
		len--;
	}
	return (dest);
}

/**
 * _base - func that return the char to print
 *
 * @str: char ptr
 */
void _base(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _memcpy - Func that copy the memory
 *
 * @dest: Copy the Destination
 * @src: Source to copy from
 * @n: The num of bytes
 *
 * Return: return ptr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * hex_checker - Checks which hex function is calling it
 *
 * @num: convert leeter num
 * @x: check which hex func will run
 *
 * Return: return the ascii value
 */
int hex_checker(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
