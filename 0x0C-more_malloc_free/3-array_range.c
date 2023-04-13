#include <stdlib.h>
#include "main.h"

/**
 * *array_range - it creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 *
 * Return: the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pointer;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pointer[i] = min++;

	return (pointer);
}
