#include "main.h"

/**
 * print_rot13 - function that encodes a string using rot13.
 * @majestic_args: the input string
 * Return: the encoded string
 */

int print_rot13(va_list majestic_args)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j;
	char *s;

	s = va_arg(majestic_args, char *);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				printf_putchar(rot13[j]);
				i++;
				break;
			}
		}
		if (!alphabet[j])
		{
			printf_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
