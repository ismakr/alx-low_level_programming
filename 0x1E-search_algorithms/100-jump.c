#include "search_algos.h"
#include <unistd.h>
#include <math.h>
#include <limits.h>
#include <stdarg.h>
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
 * _printf - print the result
 * @format: str to print
 * Return: void
 */
void _printf(char *format, ...)
{
	va_list(args);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'l')
		{
			ft_putnbr(va_arg(args, int));
			format++;
		}
		else if (*format == '%' && *(format + 1) == 'z')
		{
			ft_putnbr(va_arg(args, size_t));
			format++;
		}
		else
			write(1, &*format, 1);
		format++;
	}
	va_end(args);
}
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 * Return:  the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l;
	size_t h;
	size_t step;
	(void)array;

	l = 0;
	h = 0;
	step = sqrt(size);
	if (array == NULL && size == 0)
		return (-1);
	while (h <= size - 1)
	{
		if (h < size - 1)
			_printf("Value checked array[%z] = [%l]\n", h, array[h]);
		h += step;
		if (array[h] >= value && array[l] < value)
		{
			_printf("Value found between indexes [%z] and [%l]\n", l, h);
			while (h >= l)
			{
				_printf("Value checked array[%z] = [%l]\n", l, array[l]);
				if (value == array[l])
					return (l);
				l++;
			}
		}
		l += step;
	}
	return (-1);
}
