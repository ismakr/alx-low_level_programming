#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n:  number of strings passed to the function.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
