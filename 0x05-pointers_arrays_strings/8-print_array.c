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
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
		a++;
	}
	_putchar('\n');
}
