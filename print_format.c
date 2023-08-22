#include "main.h"

/**
 * print_format - prints the thing based on the format specifier passed.
 * @argument: the specifier passed.
 * @ap: the variable number of arguments.
 * Return: the count of characters passed.
 */


int print_format(char argument, va_list ap)
{
	int count = 0;

	if (argument == 'c')
		count = print_char(va_arg(ap, int));
	else if (argument == 's')
		count = print_str(va_arg(ap, char *));
	else if (argument == 'x' || argument == 'X')
		count = print_digit((unsigned long)va_arg(ap, unsigned int),
				16, argument == 'X');
	else if (argument == 'd' || argument == 'i')
	{
		long num = va_arg(ap, int);

		count = print_negative(num);

		count += print_digit((unsigned long)(num < 0 ? -num : num), 10, 0);
	}
	else if (argument == 'u')
		count = print_digit((unsigned long)va_arg(ap, unsigned int), 10, 0);
	else if (argument == 'o')
		count = print_digit((unsigned long)va_arg(ap, unsigned int), 8, 0);
	else if (argument == '%')
		count = print_char('%');
	else if (argument == 'p')
	{
		void *ptr = va_arg(ap, void *);

		count = print_str("0x");

		count += print_digit((unsigned long)ptr, 16, 0);
	}
	else if (argument == 'b')
		count = print_digit((unsigned long)va_arg(ap, unsigned int), 2, 0);
	else
	{
		count += print_str("%");
		count += print_char(argument);
	}

	return (count);
}
