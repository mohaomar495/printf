#include "main.h"

/**
 * print_character - print a character.
 * @ap: includeis the char to print.
 * Return: num_arguments_printed.
 */

int print_character(va_list ap)
{
	char ch = (char)va_arg(ap, int);
	int num_arguments_printed = 0;
	int ret_value = 0;

	ret_value = putchar(ch);

	if (ret_value == -1)
	{
		return (-1);
	}

	num_arguments_printed++;

	return (num_arguments_printed);
}
