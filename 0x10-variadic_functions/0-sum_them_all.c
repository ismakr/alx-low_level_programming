#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: nbr
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int i;
	int sum;

	i = 0;
	sum = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
