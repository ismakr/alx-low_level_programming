#include <stdio.h>

/**
 * main - program prints num
 * @void: Description of parameter x
 * Description: prog that prints str using
 * only printf fun
(* stdio.h: Section description)*
 * Return: this is a void fun
 */
int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
