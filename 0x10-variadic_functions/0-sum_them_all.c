#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: nbr
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	i = 0;
	sum = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
