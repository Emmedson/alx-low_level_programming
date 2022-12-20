#include "main.h"

/**
 * print_array - A function that print half of string
 *
 * @a: array int pointer
 * @n: array variable
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
