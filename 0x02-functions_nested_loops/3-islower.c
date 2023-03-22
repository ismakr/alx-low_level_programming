#include "main.h"
/**
 * _islower - prints str using only _putchar
 * @c: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: (0) if lower (1) if upper
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (0);
	}
return (0);
}
