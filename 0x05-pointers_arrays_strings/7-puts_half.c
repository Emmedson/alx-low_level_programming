#include "main.h"

/**
 * puts_half - A function that print half of string
 *
 * @str: character string
 * Return: 0
 */

void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] == '\0')
	{
		break;
		c++;
	}
	if (c % 2 == 1)
		i = c / 2;
	else
		i = (c - 1) / 2;
	for (i; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');
}
