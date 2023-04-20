#include "function_pointers.h"
/**
 * int_index - returns the index place if no element matches, return -1
 * @array: an array
 * @size: the size of elements in an array
 * @cmp: a pointer to function of one of the three in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
