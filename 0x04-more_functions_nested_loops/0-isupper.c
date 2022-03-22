#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	char c;

	if(c >= "A" && c <= "Z")
	{
		printf("%c: %d\n", c, 1);
	}
	else
	{
		printf("%c: %d\n", c, 0);
	}

	return (0);
}
