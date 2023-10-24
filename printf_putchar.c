#include <unistd.h>

/**
 * printf_putchar - Prints a char
 * @c: Variable to be printed
 * Return: 1
 */
int printf_putchar(char c)
{
	return (write(1, &c, 1));
}
