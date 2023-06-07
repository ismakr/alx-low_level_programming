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
	else if (check > nbr)
		return (_sqrt_2arg(check, ++nbr));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural sqrt of a number using 1 args
 * @n: nbr to be checked
 * Return: sqrt or -1 if there isn't one
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return (_sqrt_2arg(n, i));
}
