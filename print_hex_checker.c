#include "main.h"

/**
 * print_hex_checker - func that print the hex num
 *
 * @num: list of args
 *
 * Return: return the calc value
 */

int print_hex_checker(unsigned long int num)
{
	long int i;
	long int *arr;
	long int sum = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		sum++;
	}
	sum++;
	arr = malloc(sum * sizeof(long int));

	for (i = 0; i < sum; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = sum - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (sum);
}
