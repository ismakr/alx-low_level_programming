#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: nbr of arg passed
 * Return: int sum of all the args or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	unsigned int i, sum;
	va_list args;

	va_start(args, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
