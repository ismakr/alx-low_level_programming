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
 * _puts_recursion - put str with recursion
 * @s: pointer to ft ch
 * return: void fun
 */
void _puts_recursion(char *s)
{
	if (_strlen(s) == 0)
	{
		_putchar(10);
	}
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	if (*s == '\0')
	{
		_putchar(10);
	}
}
