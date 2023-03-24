#include "main.h"
#include <stdio.h>
/**
 * _printFizz - prints fizz
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: fizz
 */
void _printFizz(void)
{
	putchar('F');
	putchar('i');
	putchar('z');
	putchar('z');
	putchar(32);
}
/**
 * _printbuzz - prints buzz
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: buzz
 */
void _printbuzz(void)
{
	putchar('B');
	putchar('u');
	putchar('z');
	putchar('z');
}
/**
 * _FizzBuzz - 0-100 fizz buzz
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: fizzbuzz
 */
void _FizzBuzz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			if (i != 100)
			{
				putchar(32);
			}
		}
		else if (i % 3 == 0)
		{
			_printFizz();
		}
		else if (i % 5 == 0)
		{
			_printbuzz();
			if (i != 100)
			{
				putchar(32);
			}
		}
		else
		{
			if (i >= 10)
			{
				putchar(i / 10 + '0');
			}
			putchar(i % 10 + '0');
			putchar(32);
		}
		i++;
	}
	putchar(10);
}
/**
 * main - run the prog
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */
int main(void)
{
	_FizzBuzz();
	return (0);
}
