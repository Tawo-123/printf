#include "main.h"

/**
 * print_hxd - function that converts integer to hexadecimal
 * @majestic_args: the argument in the va_list
 * Return: the length of the hexadecimal number
 */

int print_hxd(va_list majestic_args)
{
	int i, j, k;
	unsigned int number, size;
	char *len;

	number = va_arg(majestic_args, unsigned int);

	if (number == 0)
	{
		printf_putchar('0');
		return (1);
	}

	size = number;
	for (i = 0; size > 0; i++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * i) + 1);
	if (len == NULL)
		return (-1);
	for (j = 0; number > 0; j++)
	{
		if ((number % 16) < 10)
			len[j] = (number % 16) + 48;
		else
			len[j] = (number % 16) + 55;
		number = number / 16;
	}
	for (k = (j - 1); k >= 0; k--)
	{
		printf_putchar(len[k]);
	}
	free(len);
	return (i);
}

/**
 * print_HXD - function that converts integer to hexadecimal
 * @majestic_args: the argument in the va_list
 * Return: the length of the hexadecimal number
 */

int print_HXD(va_list majestic_args)
{
	int i, j, k;
	unsigned int number, size;
	char *len;

	number = va_arg(majestic_args, unsigned int);

	if (number == 0)
	{
		printf_putchar('0');
		return (1);
	}

	size = number;
	for (i = 0; size > 0; i++)
	{
		size = size / 16;
	}
	len = malloc((sizeof(char) * i) + 1);
	if (len == NULL)
		return (-1);
	for (j = 0; number > 0; j++)
	{
		if ((number % 16) < 10)
			len[j] = (number % 16) + 48;
		else
			len[j] = (number % 16) + 87;
		number = number / 16;
	}
	for (k = (j - 1); k >= 0; k--)
	{
		printf_putchar(len[k]);
	}
	free(len);
	return (i);
}

