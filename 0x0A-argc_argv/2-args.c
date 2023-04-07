#include "main.h"
/**
 * main - prog prints its name
 * @argc: the number of arguments on the command line
 * @argv: an array of C-style strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j) != '\0')
		{
			_putchar(*(*(argv + i) + j));
			j++;
		}
		_putchar(10);
		i++;
	}
	return (0);
}
