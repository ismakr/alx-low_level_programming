#include "main.h"
/**
 * print_most_numbers - prints dig
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: dig from 0-9 but 2 4
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar(10);
}
