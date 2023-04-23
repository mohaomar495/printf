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
	char ch, *str_arg;
	va_list args;
	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				ch = (char)va_arg(args, int);
				putchar(ch);
				num_arguments_printed++;
			}
			else if (format[i] == 's')
			{
				str_arg = va_arg(args, char*);
				fputs(str_arg, stdout);
				num_arguments_printed += strlen(str_arg);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				num_arguments_printed++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				num_arguments_printed += 2;
			}
		}
		else
		{
			putchar(format[i]);
			num_arguments_printed++;
		}
	i++;
	}
	va_end(args);
	return (num_arguments_printed);
}
