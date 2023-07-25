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
int print_hex_checker(unsigned long int num);
char *flags(unsigned long int num, int base, int lower);
unsigned int _len(unsigned int num, int base);
void _base(char *str);
char *rev_str(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
int hex_checker(int num, char x);
int print_rev(va_list op);
int print_rot13(va_list arg);
#endif
