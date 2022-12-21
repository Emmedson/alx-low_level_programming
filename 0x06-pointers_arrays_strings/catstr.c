#include "main.h"
#include <string.h>

/**
 *_strcat - function to  concatenate two strings
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
