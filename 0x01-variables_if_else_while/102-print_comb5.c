#include <stdio.h>
/**
 * main - program prints comb3
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

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar(i / 10 + 48);
			putchar(i % 10 + 48);
			putchar(32);
			putchar(j / 10 + 48);
			putchar(j % 10 + 48);
			if (i != 98  || j != 99)
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
