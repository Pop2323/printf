#include "main.h"

/**
 * print_ptr - func that print hex num
 *
 * @ptr: lists of args
 *
 * Return: return the hex num
 */

int print_ptr(va_list ptr)
{
	void *v;
	char *n = "(nil)";
	long int a;
	int j, i;

	v = va_arg(ptr, void*);
	if (v == NULL)
	{
		for (i = 0; n[i] != '\0'; i++)
		{
			_putchar(n[i]);
		}
		return (i);
	}

	a = (unsigned long int)v;
	_putchar('0');
	_putchar('x');
	j = print_hex_aux(a);
	return (j + 2);
}

/**
 * print_hex_aux - func that prints an hex num
 *
 * @n: list of args
 *
 * Return: the hex arg num
 */

int hex_checker(unsigned long int n)
{
	long int i;
	long int *arr;
	long int calc = 0;
	unsigned long int num = n;

	while (n / 16 != 0)
	{
		n /= 16;
		calc++;
	}
	calc++;
	arr = malloc(calc * sizeof(long int));

	for (i = 0; i < calc; i++)
	{
		arr[i] = num % 16;
		num /= 16;
	}
	for (i = calc - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (calc);
}
