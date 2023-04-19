/**
 * array_iterator -  executes a function given as a
 * parameter on each element of an array
 * @array: pointer to an array
 * @size: size of an array
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action && array)
	{
		int i;

		i = 0;
		while (i < 5)
		{
			action(array[i]);
			i++;
		}
	}
}
