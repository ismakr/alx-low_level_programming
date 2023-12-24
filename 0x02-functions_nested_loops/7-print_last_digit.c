#include "main.h"
#include <unistd.h>
/**
 * print_last_digit - prints the last digit of a number
 * @nb: number.
 * Return: last dig
 */
int print_last_digit(int nb)
{
	if (nb < 0)
		nb *= -1;
	nb %= 10;
	_putchar(nb + '0');
	return (nb);
}
