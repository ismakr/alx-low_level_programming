#include "main.h"
/**
 * print_alphabet - printf alphabet lowercase10times
 *
 *return: char
 */
void print_alphabet_x10(void)
{
	char alph;
	
	int i =0;
	while (i < 10)
	{
		alph='a';
		while (alph >= 'a' && alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		_putchar(10);
		i++;
	}
}
