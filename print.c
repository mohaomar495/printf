#include <stdarg.h>
#include "main.h"

/**
 * print - function that works like printf.
 * @format: the arguments passed to it.
 * ..: these are zero or multiple arguemtns.
 * Return: count of characters.
 */

#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	va_list ap;

	va_start(ap, format);

	while (*format)
	{
		if (*format == '%')
		{
			count += print_format(*++format, ap);
		}
		else
		{
			count += write(1, format, 1);
		}
		format++;
	}

	va_end(ap);

	return (count);
}
