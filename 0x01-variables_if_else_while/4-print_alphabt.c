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

	alph = 'a';
	while (alph <= 'z')
	{
		if ((alph != 'e') && (alph != 'q'))
		{
			putchar(alph);
			alph++;
		}
		else
			alph++;
	}
	putchar('\n');
	return (0);
}
