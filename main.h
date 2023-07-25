#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct flags - this the struct token
 *
 * @main: this is the format token
 * @f: ptr function
 */

struct flags
{
	char *main;
	int (*f)(va_list);
};
typedef struct flags flags_t;


int _printf(const char *format, ...);
int _putchar(char c);
int print_int_helper(int num, int printed);
int print_int(va_list args);
#endif
