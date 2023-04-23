#include "main.h"

/**
 * print_decimal - prints an decimal.
 * @ap: given arguments.
 * Return:num_argumetns_printed.
 */

int print_decimal(va_list ap)
{
	unsigned int numerator = 0;
	unsigned int denominator = 0;
	unsigned int number = 0;
	unsigned int num_arguments_printed = 0;
	int input_num = 0;

	input_num = va_arg(ap, int);
	if (input_num < 0)
	{
		numerator = (input_num * -1);
		num_arguments_printed += putchar('-');
	}
	else
	{
		numerator = input_num;
	}

	denominator = numerator;
	number = 1;
	while (denominator > 9)
	{
		denominator /= 10;
		number *= 10;
	}
	while (number >= 1)
	{
		num_arguments_printed += putchar(((numerator / number) % 10) + '0');
		number /= 10;
	}
	return (num_arguments_printed);
}

/**
 * print_integer - prints a integr.
 * @ap: given arguments.
 * Return:num_argumetns_printed.
 */

int print_integer(va_list ap)
{
	return (print_decimal(ap));
}
