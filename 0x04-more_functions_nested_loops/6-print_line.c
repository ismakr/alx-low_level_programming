#include "main.h"
/**
 * print_line - prints line dep n
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: line
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar(10);
	}
}
