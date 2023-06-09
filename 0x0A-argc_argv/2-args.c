#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
