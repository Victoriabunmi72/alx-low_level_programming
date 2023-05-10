#include "search_algos.h"

/**
 * linear search algorithm
 * search for size in the number of element in array.
 * search for value.
 * Return: Always EXIT_SUCCESS.
 */

int linear_search(int *array, size_t size, int value) {
	if (array == NULL) {
		return -1;
	}

	for (size_t i = 0; < size; i++) {
		printf("Comparing %d with %d\n", array[i], value);
		if (array[i] == value) {
			return 1;
		}
	}

	return -1;
}
