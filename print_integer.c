#include "main.h"

/**
 * print_decimal - prints a decimal.
 * @ap: given arguments.
 * Return: number of arguments printed.
 */

int print_decimal(va_list ap)
{
	int input_num = va_arg(ap, int);
	char buffer[50];
	int num_arguments_printed;

	num_arguments_printed = snprintf(buffer, 50, "%d", input_num);
	fputs(buffer, stdout);

	return (num_arguments_printed);
}

/**
 * print_integer - prints an integer.
 * @ap: given arguments.
 * Return: number of arguments printed.
 */
int print_integer(va_list ap)
{
	return (print_decimal(ap));
}
