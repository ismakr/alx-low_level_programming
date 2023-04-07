#include "main.h"
#include <stdio.h>
/**
 * ft_putnb - prints nub
 * @n: int
 * Return: void
 */
void ft_putnb(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar(n + 48);
	}
	else
	{
		ft_putnb(n / 10);
		ft_putnb(n % 10);
	}
}
/**
 * main - prog prints its name
 * @argc: the number of arguments on the command line
 * @argv: an array of C-style strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	ft_putnb(argc);
	_putchar(10);
	return (0);
}
