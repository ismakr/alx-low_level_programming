#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
		printf("%d is positive/n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative/n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero/n", n);
	}
	return (0);
}
