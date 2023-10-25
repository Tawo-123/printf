#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct Converter - defines a structure for conversion functions
 * @spec: the conversion specifier character
 * @f: the conversion function
 */
typedef struct Converter
{
	char spec;
	int (*f)(va_list);
} Converter;

int _printf(const char *format, ...);
int printf_putchar(char c);
int majestic_char(va_list majestic_args);
int division_print(va_list majestic_args);
int ze_one_binary(va_list majestic_args);
int majestic_string(va_list majestic_args);
int figure_print(va_list majestic_args);
int rev_string(va_list majestic_args);
int print_rot13(va_list majestic_args);

#endif
