#include <stdio.h>

/**
 * main - program prints alph
 * @void: Description of parameter x
 * Description: prog that prints str using
 * only printf fun
(* stdio.h: Section description)*
 * Return: this is a void fun
 */
int main(void)
{
	char alph;

	alph = 'z';
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
