/**
 * reverse_array - cat str
 * @a: Description of parameter x
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return:  void
 */
void reverse_array(int *a, int n)
{
	int swp;
	int i;
	int j;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		swp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = swp;
		i++;
		j--;
	}
}
