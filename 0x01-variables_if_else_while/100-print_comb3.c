#include <stdio.h>
/**
 * main - program prints two dig comb
 * @void: Description of parameter x
 * Description: prog that prints str using
 * only printf fun
(* stdio.h: Section description)*
 * Return: this is a void fun
 */
int main(void)
{

	int i;
	int j;

	i = 48;
	while (i <= 56)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56 && j != 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	return (0);
}
