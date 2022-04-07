#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: takes a array
 * @n: takes number of elements in array
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int len = 0;

	while (a[len] != '\0')
	{
		len++;
	}

	if (len == n)
		for (int i = 0; i < len; i++)
			_putchar(a[i]);

	_putchar('\n');
}
