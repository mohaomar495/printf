#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct type - links specifiers to correct _printf function.
 * @print: function pointer.
 * @specifier: the specifier.
 */

typedef struct
{
	char *specifier;
	int (*print)(va_list);
} type_t;

int _printf(const char *format, ...);
int (*get_specifier(const char *specifier))(va_list);
int print_integer(va_list ap);
int print_character(va_list ap);
int print_string(va_list ap);
int print_decimal(va_list ap);
void print_binary(unsigned int num);

#endif /*MAIN_H*/
