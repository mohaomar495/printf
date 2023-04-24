#include "main.h"

/**
 * get_specifier - finds the specifier.
 * @specifier: specifier used to printf certain output.
 * Return: NULL;
 */

int (*get_specifier(const char *specifier))(va_list)
{
	int i = 0;
	type_t types[] = {
		{"s", print_string},
		{"c", print_character},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL},
	};

	while (types[i].specifier != NULL)
	{
		if (*specifier == *(types[i].specifier))
		{
			return (types[i].print);
		}
		i++;
	}
	return (NULL);
}

