#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - program prints the last num
 * @void: Description of parameter x
 * Description: prog that prints str using
 * only printf fun
(* stdio.h: Section description)*
 * Return: this is a void fun
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m;

	m = n;
	m = m % 10;
	if (m > 5)
	{
		printf("the last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
