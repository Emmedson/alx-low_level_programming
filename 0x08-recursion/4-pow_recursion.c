#include "main.h"

/**
 * _pow_recursion - output the value of a number raise to the power y
 * @x: base value.
 * @y: power.
 * Return: -1 if y is lower than 0, returns x**y otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
