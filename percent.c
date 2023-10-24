#include "main.h"

/**
 * division_print - a function that prints % to the console
 * which must be escaped by % first
 * @majestic_args: % character to be printed
 * Return: 1 on success
 */
int division_print(va_list majestic_args)
{
	(void) majestic_args;

	printf_putchar('%');
	return (1);
}
