/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcat - cat str
 * @dest: Description of parameter x
 * @src: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return:  dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = _strlen(dest);
	while (*(src + i) != '\0')
	{
		*(dest + j) = *(src + i);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
