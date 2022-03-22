#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is uppercase.
 * @c: takes a character
 * Return: Always 0
 */

int _isupper(char c)
{
	if (c >= "A" && c <= "Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
