#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocated memory using malloc.
 * @b: memory bytes to allocate.
 * Return: pointer to memory.
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
