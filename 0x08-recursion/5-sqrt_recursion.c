#include "main.h"
/**
 * _sqrt_2arg - returns the natural sqrt of a number using 2 args
 * @check: nbr to be checked
 * @nbr: the sqrt
 * Return: sqrt or -1 if there isn't one
 */
int _sqrt_2arg(int check, int nbr)
{
	if (nbr * nbr == check)
		return (nbr);
	if (nbr <= 0)
		return (-1);
	return (_sqrt_2arg(check, nbr - 1));
}
/**
 * _sqrt_recursion - returns the natural sqrt of a number using 1 args
 * @n: nbr to be checked
 * Return: sqrt or -1 if there isn't one
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_2arg(n, n));
}
