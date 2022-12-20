#include "main.h"

/**
 * print_rev - A function that print stringsin reverse order
 *
 * @s: character string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int x;

	while (s[i] != '\0')
	{
		i++
	}
	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
