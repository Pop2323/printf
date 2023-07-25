#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

#define NULL_STR "(null)"
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
int formater(const char *format, flags_t flags_list[], va_list args);
int print_char(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_ptr(va_list ptr);
int hex_checker(unsigned long int n);
int print_Str(va_list arg);
int checker(char c);
char *flags(unsigned long int num, int base, int lower);
int print_rev(va_list op);
int print_rot13(va_list arg);
#endif
