#include "main.h"
#include <stdio.h>
/**
 * posneg - check negpos
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int
 */
int posneg(char *s)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (*(s + i) < 48 || *(s + i) > 57)
	{
		if (*(s + i) == '-')
		{
			n *= -1;
		}
		i++;
	}
	return (n);
}
/**
 * _atoi - conv to int
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int 0 if not nub nb if nb
 */
int _atoi(char *s)
{
	int i;
	int nn;
	int nb;

	nb = 0;
	nn = posneg(s);
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			nb = (nb + *(s + i)) - 48;
			if (*(s + (i + 1)) >= 48 && *(s + (i + 1)) <= 57)
			{
				nb = nb * 10;
			}
			if (!(*(s + (i + 1)) >= 48 && *(s + (i + 1)) <= 57))
			{
				break;
			}
		}
		i++;
	}
	if (nb == 0)
	{
		return (0);
	}
	else
	{
		return (nb * nn);
	}
}
/**
 * _puts - ret the length of str
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void _puts(void)
{
	char *str;

	str = "Error";
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar(10);
}
/**
 * main - prog prints its name
 * @argc: the number of arguments on the command line
 * @argv: an array of C-style strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mu;
	int j;

	j = 0;
	mu = 0;
	i = 1;
	while (i < argc)
	{
		if (*(*(argv + i) + j) < 48 || *(*(argv + i) + j) > 57)
		{
			_puts();
			return (1);
		}
		mu += _atoi(*(argv + i));
		i++;
	}
	printf("%d", mu);
	printf("\n");
	return (0);
}
