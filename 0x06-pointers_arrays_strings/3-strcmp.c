/**
 * _strcmp - cat str
 * @s1: Description of parameter x
 * @s2: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return:  0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i++;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}
