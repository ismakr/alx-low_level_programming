#include "main.h"
/**
 * print_square - prints diag line dep n
 * @size: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return:  0
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar(10);
			i++;
		}
	}
}
