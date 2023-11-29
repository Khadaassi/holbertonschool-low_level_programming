#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct list_s
{
	char *str;
    size_t len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

#endif
