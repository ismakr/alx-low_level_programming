#include <stdlib.h>
#include <time.h>
/**
 * main - program prints n
 * @void: Description of parameter x
 * Description: prog that prints str using
 * only printf fun
(* stdio.h: Section description)*
 * Return: this is a void fun
 */
int main(void)
{
	int	n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%n is positive", n);
	}
	else if (n < 0)
	{
		printf("%n is negative", n);
	}
	else if (zero_n == 0)
	{
		printf("%n is zero", n);
	}
	return (0);
}
