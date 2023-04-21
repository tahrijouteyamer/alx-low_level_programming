#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - this f returns the sum of all its paramters
 * @n: the number of paramters passed to the function
 * @...: a variable number of paramters to calculate the sum of numbers
 * Return: if n == zero else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int i, sum = 0;

	va_start(app, n);

	for (i = 0; i < n; i++)
		sum += va_arg(app, int);

	va_end(app);

	return (sum);
}
