#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function to print small later a to z
 *
 *
 *Return: zero or number value
 */

char ch;

int main(void)
{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
