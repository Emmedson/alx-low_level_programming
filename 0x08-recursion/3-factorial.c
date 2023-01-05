#include "main.h"
/**
 * factorial - prints the factorai of a number.
 * @n: given number.
 * Return: the factorial of given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
