#include "main.h"

/**
 * print_digit - prints a digit.
 * @digit: the digit to print back.
 * @base: is the base of that digit like base 10 or 16 and so on.
 * @uppercase: determines whether its hex upper ot lower.
 * Return: count.
 */

int print_digit(unsigned long digit, int base, int uppercase)
{
	int count = 0;
	char *hex_symb = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (digit < (unsigned long)base)
	{
		count += print_char(hex_symb[digit]);
	}
	else
	{
		count = print_digit(digit / base, base, uppercase);
		count += print_digit(digit % base, base, uppercase);
	}

	return (count);
}
