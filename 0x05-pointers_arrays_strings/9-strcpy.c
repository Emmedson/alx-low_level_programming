i#include "main.h"

/**
 * _strcpy - A function that print half of string
 *
 * @a: array int pointer
 * @n: array variable
 * Return: 0
 */

char *_strcpy(char *dest, char *src)

{

		int i;



			for (i = 0; *(src + i) != '\0'; i++)

					{

								dest[i] = *(src + i);

									}

				dest[i] = '\0';



					return (dest);

}
