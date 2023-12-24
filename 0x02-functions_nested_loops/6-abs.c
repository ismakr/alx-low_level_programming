#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @c: number
 * Return: the absolute value
 */
int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
