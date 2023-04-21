#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings.
 * @separator: ptr to the string to be printed between strs
 * @n: number of str passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *put;
	va_list args;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		put = va_arg(args, char*);
		if (put == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", put);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
