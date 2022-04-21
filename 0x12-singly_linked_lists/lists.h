#ifndef _LISTS_H_
#define _LISTS_H_

int _putchar(char c);
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t print_list(const list_t *h);
#endif
