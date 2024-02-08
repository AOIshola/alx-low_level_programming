#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int h_binary_search(int *array, size_t low, size_t high, int value);
void printSearch(int *array, size_t low, size_t high);

#endif
