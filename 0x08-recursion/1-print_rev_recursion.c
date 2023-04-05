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
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * _print_rev_recursion - put str with recursion rev
 * @s: pointer to ft ch
 * return: void fun
 */
void _print_rev_recursion(char *s)
{
	if (_strlen(s) == 0)
	{
		_putchar(10);
	}
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar(10);
	}
}
