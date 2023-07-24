#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>


int printf_char(va_list args, int params);
int printf_str(va_list args, int params);
int printf_int(va_list args, int params);
int printf_binary(unsigned int num, int params);
int _h(unsigned int num, int params, int uppercase);
int printf_octal(unsigned int num, int params);
int printf_unsigned(unsigned int num, int params);
int printf_rev(va_list args, int params);
int printf_ptr(va_list args, int params);
int flags(const char *format, va_list args, int params);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
