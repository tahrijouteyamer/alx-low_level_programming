#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this prints the name using pointer to function
 * @name: a string to add
 * @f: the pointer to function
 * Return: nothing to return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
