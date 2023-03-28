#include "main.h"
/**
 * puts2 - ret the length of str
 * @str: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
			str++;
			i++;
		}
		else
		{
			str++;
			i++;
		}
	}
	_putchar(10);
}
