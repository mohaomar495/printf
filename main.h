#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int print_char(int c);
int print_str(char *s);
int print_negative(long num);
int print_digit(unsigned long digit, int base, int uppercase);
int print_format(char argument, va_list ap);
int _printf(const char *format, ...);

#endif /*Mohammad Adde */
