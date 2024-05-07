#include "search_algos.h"
#include <unistd.h>
#include <stdarg.h>
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
 * ft_printf - print str nad call ft_putnbr when required
 * @format: str to print
 * @a: index to print
 * @b: array ele to print
 * Return: void
 */
void ft_printf(char *format, size_t a, int b)
{
	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'l')
		{
			ft_putnbr(a);
			format++;
		}
		else if (*format == '%' && *(format + 1) == 'z')
		{
			ft_putnbr(b);
			format++;
		}
		else
			write(1, &*format, 1);
		format++;
	}
}
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: the first index where value is located / -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		ft_printf("Value checked array[%l] = [%z]", i, *array);
		write(1, "\n", 1);
		if (*array == value)
			return (i);
		array++;
		i++;
	}
	return (-1);
}
