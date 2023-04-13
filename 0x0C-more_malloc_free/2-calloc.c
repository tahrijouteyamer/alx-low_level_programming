#include <stdlib.h>
#include "main.h"

/**
 * *_memset - it fills memory with a constant byte
 * @s: a memory area to be filled
 * @b: a char to copy
 * @n: the number of times to copy b
 *
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - it allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: the pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
