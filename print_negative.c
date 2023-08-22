#include "main.h"

/**
 * print_negative - prints a negative number or digit.
 * @num: is the number to print back.
 * Return: count of the number of digits in that number.
 */

int print_negative(long num)
{
	int count = 0;

	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}

	return (count);
}
