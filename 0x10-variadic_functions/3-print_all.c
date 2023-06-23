#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - prints char
 * @c: char to be printed
 * Return: void
 */
void print_char(char c)
{
	printf("%c", c);
}
/**
 * print_str - prints str
 * @str: ptr to the str
 * Return: void
 */
void print_str(char *str)
{
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
/**
 * print_int - prints int
 * @i: int to be printed
 * Return: void
 */
void print_int(int i)
{
	printf("%d", i);
}
/**
 * print_float - prints float
 * @f: float to be printed
 * Return: void
 */
void print_float(float f)
{
	printf("%f", f);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char arr[4] = {'c', 'i', 'f', 's'};
	va_list args;

	va_start(args, format);
	j = 0;
	while (format[j] != '\0')
	{
		i = 0;
		while (format[j] != arr[i] && i < 4)
		{
			i++;
		}
		switch (arr[i])
		{
			case 'c':
				print_char(va_arg(args, int));
				break;
			case 's':
				print_str(va_arg(args, char *));
				break;
			case 'i':
				print_int(va_arg(args, int));
				break;
			case 'f':
				print_float(va_arg(args, double));
				break;
		}
		if (format[j + 1] != '\0' && format[j] == arr[i])
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
