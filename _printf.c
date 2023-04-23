#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output
 * according to a format.
 * @format: is character string.
 * Return: number of arguments printed so far.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int num_arguments_printed = 0;
	char ch, *str_arg;

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			switch(format[i])
			{
				case 'c':
					ch = (char)va_arg(args, int);
					putchar(ch);
					num_arguments_printed++;
					break;
				case 's':
					str_arg = va_arg(args, char*);
					fputs(str_arg, stdout);
					num_arguments_printed += strlen(str_arg);
					break;
				case '%':
					putchar('%');
					num_arguments_printed++;
					break;
				default:
					putchar('%');
					putchar(format[i]);
					num_arguments_printed += 2;
					break;
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
