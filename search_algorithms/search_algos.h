#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
