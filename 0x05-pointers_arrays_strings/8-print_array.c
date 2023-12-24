#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: ptr to int array
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n <= 0)
		printf("\n");
	while (i < n)
	{
		if (n - 1 == i)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
}
