#include "main.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: is character string.
 * Return: number of arguments printed so far.
 */

int _printf(const char *format, ...)
{
	int i = 0, num_arguments_printed = 0;
	va_list ap;
	int (*specifiers)(va_list) = NULL;

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			i++;
			specifiers = get_specifier(format);
			if (format[i] == '\0')
				return (-1);
			else if (specifiers == NULL)
			{
				putchar(format[i - 1]);
				putchar(format[i]);
				num_arguments_printed += 2;
			}
			else
				num_arguments_printed += specifiers(ap);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i++;
			putchar('%');
			num_arguments_printed++;
		}
		else
		{
			putchar(format[i]);
			num_arguments_printed++;
		}
	i++;
	}
	va_end(ap);
	return (num_arguments_printed);
}
