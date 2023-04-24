#include "main.h"

/**
 * print_string - prints string.
 * @ap: holds the string to print.
 * Return: num_arguments_printed.
 */

int print_string(va_list ap)
{
	char *string = va_arg(ap, char*);
	int num_arguments_printed = 0;
	int i = 0;
	int ret_value = 0;

	if (string == NULL)
		string = "(null)";
	while (string[i] != '\0')
	{
		ret_value = putchar(string[i]);
		if (ret_value == -1)
			return (-1);
		num_arguments_printed++;
		i++;
	}

	return (num_arguments_printed);
}
