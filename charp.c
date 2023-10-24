#include "main.h"

/**
 * majestic_char - a function to print character from the pfList.
 * it converts the specifier %c into readeable format
 * @majestic_args: the character to be printed
 * Return: 1 which indicates success
 */

int majestic_char(va_list majestic_args)
{
	char role;

	role = (char)va_arg(majestic_args, int);
	printf_putchar(role);
	return (1);
}

