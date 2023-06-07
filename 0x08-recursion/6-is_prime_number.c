#include "main.h"
/**
 * is_2arg - check if nbr is a prime nbr with 2 par
 * @check: base nbr
 * @nbr: count
 * Return: 1 if the input integer is a PN, otherwise return 0.
 */
int is_2arg(int check, int nbr)
{
	if (check == 1 || check < 0)
		return (0);
	else if (nbr == check)
		return (1);
	else if (check % nbr == 0)
		return (0);
	else
		return (is_2arg(check, nbr + 1));
}
/**
 * is_prime_number - check if nbr is a prime nbr with 2 par
 * @n: base nbr
 * Return: 1 if the input integer is a PN, otherwise return 0.
 */
int is_prime_number(int n)
{
	return (is_2arg(n, 2));
}
