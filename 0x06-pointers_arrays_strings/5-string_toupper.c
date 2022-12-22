#include "main.h"

/**
 *string_toupper - changes any lowercases letters  to uppercase
 *@str: parameter
 *Return: returns a character
 */

char *string_toupper(char *str)
{
	int x = 0;

	while (str[x++])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 32;
		}
	}
	return (str);
}
