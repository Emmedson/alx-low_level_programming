#include <stdio.h>
#include <unistd.h>

/**
 * main - write funtion to output string
 * Return: 1 after execution
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
