#include "main.h"
/**
 * _islower - function to print lower case
 *
 * @c: character to be checked
 *Return: zero or number value
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
