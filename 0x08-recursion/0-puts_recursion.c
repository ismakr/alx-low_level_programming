#include "main.h"
/**
 * _puts_recursion - put str with recursion
 * @s: pointer to ft ch
 * return: void fun
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	if (*(s - 1) == '\0')
	{
		_putchar(10);
	}
}
