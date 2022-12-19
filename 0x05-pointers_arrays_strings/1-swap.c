#include "main.h"

/**
 * swap_int - swap the values of *a and *b
 *
 * @a: First int value
 * @b: Second int value
 * Return: Zero 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;

	*b = x;

}

