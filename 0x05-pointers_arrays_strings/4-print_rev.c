#include "main.h"

/**
 * print_rev - takes a string and reverses it
 * @s: string
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int len, i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	len = i;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
