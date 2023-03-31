/**
 * cap_string - cp frt car str
 * @s: Description of parameter s
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int dest
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	string_toupper(s);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ';' || *(s + i) == ',' || *(s + i) == '.'
				|| *(s + i) == '!' || *(s + i) == '?'
				|| *(s + i) == '"' || *(s + i) == '(' || *(s + i) == ')'
				|| *(s + i) == '{' || *(s + i) == '}' || *(s + i) == 10
				|| *(s + i) == 32 || *(s + i) == 9)
		{
			if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
			{
				*(s + i + 1) -= 32;
			}
		}
		i++;
	}
	return (s);
}
