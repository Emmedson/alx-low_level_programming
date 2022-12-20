#include "main.h"

/**
 * puts2 - A function that print characters of string
 *
 * @str: character string
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
