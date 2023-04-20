#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: function parameters
 *
 * @...: a variable numbe of parameter to be calculated
 *
 * Return: 0 if n eqaul to 0; sum if sucessful
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(args,  n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
