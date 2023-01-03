#include "main.h"

/**
 * _strspn -function to get the length of a prefix substring.
 * @s: string.
 * @accept: bytes.
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != s[i]; n++)
		{
			if (accept[n] == '\0')
				return (i);
		}
	}
	return (i);
}
