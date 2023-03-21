#include "main.h"
/**
 * print_alphabet - printf alphabet lowercase
 *
 *return: char
 */
void print_alphabet(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar(10);
}
