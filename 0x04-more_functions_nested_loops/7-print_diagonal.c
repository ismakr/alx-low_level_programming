#include "main.h"
/**
 * print_diagonal - prints diag line dep n
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: diag line
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar(10);
	}

	i = 1;
	while (i <= 10)
	{
		j = 1;
		while (j <= i)
		{
			if (i != j)
			{
				_putchar(32);
			}
			else
			{
				_putchar(92);
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}
