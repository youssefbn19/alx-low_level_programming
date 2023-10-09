#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array_elements(int *array, size_t start, size_t end);
int jump_search(int *array, size_t size, int value);
size_t min(size_t num1, size_t num2);
#endif
