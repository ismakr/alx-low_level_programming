#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

	mu = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j) != '\0')
		{
			if (*(*(argv + i) + j) < 48 || *(*(argv + i) + j) > 57)
			{
				printf("Error");
				printf("\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		mu += atoi(*(argv + i));
		i++;
	}
	printf("%d", mu);
	printf("\n");
	return (0);
}
