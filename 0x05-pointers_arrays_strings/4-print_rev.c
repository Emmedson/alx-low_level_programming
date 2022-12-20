#include "main.h"

/**
 * print_rev - A function that print stringsin reverse order
 *
 * @s: character string
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	i = string_length(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
