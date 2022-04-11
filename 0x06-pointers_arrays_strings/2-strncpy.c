#include "main.h"

/**
 * _strncpy - Return a pointer to the resulting string dest
 * @dest: a destructured string
 * @src: string to be added to dest
 * @n: uses at most n bytes from src
 *
 * Return: a pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{

dest[i] = src[i];

}

dest[1 + i] = '\0';

return (dest);
}
