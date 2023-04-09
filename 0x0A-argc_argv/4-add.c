#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - ret the length of str
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void _puts(void)
{
	char *str;

	str = "Error";
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar(10);
}
/**
 * main - prog prints its name
 * @argc: the number of arguments on the command line
 * @argv: an array of C-style strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mu;
	int j;

	j = 0;
	mu = 0;
	i = 1;
	while (i < argc)
	{
		if (*(*(argv + i) + j) < 48 || *(*(argv + i) + j) > 57)
		{
			_puts();
			return (1);
		}
		mu += atoi(*(argv + i));
		i++;
	}
	printf("%d", mu);
	printf("\n");
	return (0);
}
