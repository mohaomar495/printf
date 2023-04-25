#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of an ussigned integer.
 * @num: the unsigned integer to convert to binary.
 * Return: 1.
 */

void print_binary(unsigned int num)
{
	int binary[32];

	int i = 0;
	int j;

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	printf("Binary: ");
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
	if (i == 0)
	{
	i++;
	putchar('0');
	}
}

