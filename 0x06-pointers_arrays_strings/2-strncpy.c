/**
 * _strncpy - cp str
 * @dest: Description of parameter x
 * @src: Description of parameter x
 * @n: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
