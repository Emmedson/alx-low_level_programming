#include "main.h"
#include <string.h>

/**
 *_strncpy - function to  copy strings
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of character to be concatenated
 *Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
