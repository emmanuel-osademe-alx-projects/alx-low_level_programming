#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
/* Used for fourth test
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
*/

int main(void)
{
    /*
     char s1[98] = "Hello ";
     char s2[] = "World!\n";
     char *ptr;
    es*/

    /* first tets
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    */

    /* second test
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    */

    /* third test
     printf("%d\n", _strcmp(s1, s2));
     printf("%d\n", _strcmp(s2, s1));
     printf("%d\n", _strcmp(s1, s1));
     */

    /* fourth test
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, 5);
    print_array(a, sizeof(a) / sizeof(int));
    */

   /* fifth test*/
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);

    return (0);
}