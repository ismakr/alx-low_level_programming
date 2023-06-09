#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int arg, sum, num, i;

	arg = argc - 1;
	sum = 1;
	i = 1;
	if (arg < 2)
	{
		printf("Error\n");
		return (1);
	}
	while (i <= arg)
	{
		num = atoi(argv[i]);
		sum *= num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
