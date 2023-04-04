/**
 * _strspn - Returns the length of the initial portion
 * of str1 which consists only of characters
 * that are part of str2.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: The length of the initial portion of
 * str1 containing only characters that appear in str2.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count;
	int j;

	j = 0;
	i = 0;
	count = 0;
	while (*(accept + j) != '\0')
	{
		while (*(s + i) == *(accept + j))
		{
			count += 1;
			j = 0;
			i++;
		}
		j++;
	}
	return (count);
}
