#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arg, sum, num, i, j;

	arg = argc - 1;
	sum = 0;
	i = 1;
	if (arg == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (i <= arg)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			num = atoi(argv[i]);
			sum += num;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
