#include "main.h"
/**
 * print_alphabet_x10 - function to print alphabet 10times
 *
 *
 *Return: zero or number value
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}
