#include "main.h"
#include <string.h>

/**
 *_strncat - function to  concatenate two strings and n
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of character to be concatenated
 *Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
