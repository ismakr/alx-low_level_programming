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
 * rev_string - rev
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
	i = _strlen(s) - 1;
	while (i >= 0 && *s != '\0')
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar(10);
}
