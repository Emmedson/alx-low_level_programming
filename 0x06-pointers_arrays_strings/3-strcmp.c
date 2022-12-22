#include "main.h"
#include <string.h>

/**
 *_strcmp - function to  compare two strings
 *
 *@s1: pointer to destination string
 *@s2: pointer to source string
 *Return: 0 to destination string
 */

int _strcmp(char *s1, char *s2)
{
	int result;
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
