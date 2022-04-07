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
	int i, len = 0;

	while (a[len] != '\0')
	{
		len++;
	}

	if (n >= len)
		for (i = 0; i < len; i++)
			printf("%d", a[i]);

	printf("\n");
}
