#include <stdio.h>
/**
 * main -  program that prints its name, followed by a new line.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
