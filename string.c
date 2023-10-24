#include "main.h"

/**
 * majestic_string - a function that print the string in the pfList
 * when it encounters %s
 * @majestic_args: the string to be printed
 * Return: the length of the string
 */
int majestic_string(va_list majestic_args)
{
	int fam;
	char *strfam;

	strfam = va_arg(majestic_args, char *);
	if (strfam == NULL)
		strfam = "(null)";
	for (fam = 0; strfam[fam] != '\0'; fam++)
	{
		printf_putchar(strfam[fam]);
	}
	return (fam);
}

