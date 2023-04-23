#include "main.h"
/**
 * _printf - function that produces output
 * according to a format.
 * @format: is character string.
 * Return: number of arguments printed so far.
 */
int _printf(const char *format, ...)
{
	int count = 0, (*function)(va_list) = NULL;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				function = get_specifier(format);
				if (function == NULL)
				{
					putchar(*(format - 1));
					putchar(*format);
					count += 2;
				}
				else
				{
					count += function(args);
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
