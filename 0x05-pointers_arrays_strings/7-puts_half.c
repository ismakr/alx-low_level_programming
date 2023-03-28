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

	j = _strlen(str) - 1;
	if (_strlen(str) % 2 == 0)
	{
		i = _strlen(str) / 2;
	}
	else if (_strlen(str) % 2 != 0)
	{
		i = (_strlen(str) + 1) / 2;
	}
	while (*str != '\0' && i <= j)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
