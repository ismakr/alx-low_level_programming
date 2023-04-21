#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - returns the sum of all its parameters.
 * @separator: ptr to the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		sum = va_arg(args, int);
		printf("%d", sum);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
