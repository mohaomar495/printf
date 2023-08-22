#include <unistd.h>
#include "main.h"

/**
 * print_char - prints a char to the display.
 * @c: character to  print.
 * Return: count of the characters.
 */

int print_char(int c)
{
	return (write(1, &c, 1));
}
