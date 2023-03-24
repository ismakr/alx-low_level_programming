#include "main.h"
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
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
	_putchar(32);
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
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
	_putchar(32);
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
		if (i % 3 == 0)
		{
			_printFizz();
		}
		else if (i % 5 == 0)
		{
			_printbuzz();
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(32);
		}
		else
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
				_putchar(32);
			}
			_putchar(i % 10 + '0');
			_putchar(32);
		}
		i++;
	}
	_putchar(10);
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
