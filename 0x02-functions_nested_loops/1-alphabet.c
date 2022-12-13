#include "main.h"
/**
 * print_alphabet - function to print alphabet
 *
 *
 *Return: zero or number value
 */

int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}
