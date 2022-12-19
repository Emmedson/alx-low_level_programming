#include "main.h"

/**
 * _puts - A function that print a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
