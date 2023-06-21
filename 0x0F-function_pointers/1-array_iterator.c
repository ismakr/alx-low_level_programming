#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: the array given.
 * @size: size of the array
 * @action: ptr the fun that need to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action)
	{
		size_t i;

		i = 0;
		while (i < size)
		{
			action(*(array + i));
			i++;
		}
	}
}
