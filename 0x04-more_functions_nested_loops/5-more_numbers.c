#include "main.h"
/**
 * more_numbers - prints dig
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: digs 0-14
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (k < 10)
	{
		while (i <= 14)
		{
			j = 0;
			while (j <= 14)
			{
				if (j >= 10)
				{
					_putchar(j / 10 + '0');
				}
				_putchar(j % 10 + '0');
				j++;
			}
			_putchar(10);
			i++;
		}
		k++;
	}
}
