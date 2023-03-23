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

	i = 0;
	j = 0;
	while (i <= 14)
	{
		while (j <= 14)
		{
			if (j >= 10)
			{
				putchar(j / 10 + '0');
			}
			putchar(j % 10 + '0');
			j++;
		}
		i++;
	}
	putchar(10);
}
