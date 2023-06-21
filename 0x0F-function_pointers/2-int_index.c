/**
 * int_index - searches for an integer.
 * @array: array
 * @size: number of elements in the array.
 * @cmp:  pointer to the function to be used to compare values
 * Return:  index of the first element for which
 * the cmp function does not return 0
 * if no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(*(array + i)) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
