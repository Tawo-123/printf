#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string containing zero or more directives
 * @...: variable number of arguments to print
 *
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	Converter converters[] = {
		{'c', majestic_char},
		{'s', majestic_string},
		{'%', division_print},
		{'b', ze_one_binary},
		{'d', figure_print},
		{'i', figure_print},
		{'\0', NULL}
	};

	va_list majestic_args;
	int i, j, enumerate = 0;

	va_start(majestic_args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; converters[j].spec; j++)
			{
				if (format[i] == converters[j].spec)
				{
					enumerate += converters[j].f(majestic_args);
					break;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			enumerate++;
		}
	}

	va_end(majestic_args);
	return (enumerate);
}

