#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sums all the integers
 *@n: no of parameters
 *@...: parameters to be summed
 *
 *Return: If (n == 0) - 0 Otherwise sum of all ints
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
