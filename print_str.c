#include <unistd.h>
#include "main.h"

/**
 * print_str - proints a string.
 * @s: the string to print.
 * Return: count of the characters in that string.
 */

int print_str(char *s)
{
	int count  = 0;

	while (*s)
	{
		count += write(1, s++, 1);
	}

	return (count);
}
