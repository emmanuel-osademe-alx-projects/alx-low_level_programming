#include "main.h"

/**
 * _strcat - returns a pointer
 * @dest: a destructured string
 * @src: string to be added to dest
 *
 * Return: a pointer.
 */

char *_strcat(char *dest, char *src)
{
while (*dest != 0)	/* while dest is not null-terminating char */
dest++;		/* get to the end */

while (*src != 0)	/* while src is not the null-terminating char */
{
src++;
*dest = *src;
}

return (dest);
	/**
	*int len, len2, len3, i;
	*len = 0, len2 = 0;
	*while (dest[len] != 0)
	*	len++;
	*while (src[len2] != 0)
	*	len2++;
	*for (i = 0; i <= len2; i++)
	*{
	*	dest[len + i] = src[i];
	*}
	*len3 = len + len2 + 1;
	*dest[len3] = '\n';
	*return (dest);
	*/
}
