#include <unistd.h>
#include "search_algos.h"
#include <limits.h>
/**
 * ft_putnbr - print nb to stdout
 * @nb: nb to print
 * Return: void
 */
void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb == INT_MIN)
	{
		write(1, "-2147483647", 1);
	}
	else if (nb < 10)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/**
 * ft_putarr - print arr
 * @array: array to print
 * @l: arr start
 * @r: arr end
 * Return: void
 */
void ft_putarr(int *array, int l, int r)
{
	while (l < r)
	{
		ft_putnbr(array[l]);
		if (l != r - 1)
			write(1, ", ", 1);
		l++;
	}
	write(1, "\n", 1);
}
/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of arr
 * @value: value to search for
 * Return: void
 */
int binary_search(int *array, size_t size, int value)
{
	int r;
	int l;
	int m;
	(void)value;
	r = size - 1;
	l = 0;
	write(1, "Searching in array: ", 20);
	ft_putarr(array, l, r + 1);
	while (l <= r)
	{
		m = (r + l) / 2;
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		if (l != m && r != m)
		{
			write(1, "Searching in array: ", 20);
			ft_putarr(array, l, r + 1);
		}
		if (array[m] == value)
			return (value);
	}
	return (-1);
}
