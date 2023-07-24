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
int formater(const char *format, flags_t f_list[], va_list args);
int print_percent(va_list);
int print_int(va_list);
int print_char(va_list);
int print_str(va_list);
int print_Str(va_list val);
int print_unsigned_integer(va_list);
int print_binary(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);
int print_ptr(va_list val);
int print_rev(va_list l);
int print_rot13(va_list list);
int print_num(va_list args);
unsigned int _len(unsigned int, int);
char *rev_str(char *);
char *convert(unsigned long int num, int base, int lowercase);
void _base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_num(unsigned int n);
int _check_hex(int num, char x);
int print_hex_(unsigned long int num);
int check_alpha_num(char c);
int _puts(char *str);
#endif
