/**
 * string_toupper - cat str
 * @str: parametre
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return:  0
 */
char *string_toupper(char *);
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}
