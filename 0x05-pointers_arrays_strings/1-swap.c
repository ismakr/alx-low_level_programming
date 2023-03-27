/**
 * swap_int - swap two int
 * @a: pointer to int
 * @b: pointer to int
 * swap two int
 * return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
