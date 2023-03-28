#include "main.h"
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * puts_half - ret the half of str
 * @str: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = _strlen(str) / 2;
	j = _strlen(str) - 1;
	while (*str != '\0' && i <= j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
