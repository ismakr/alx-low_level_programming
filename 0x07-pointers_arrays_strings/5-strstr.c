#include <stddef.h>
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
 * _strstr - fun strstr
 * @haystack: parametre
 * @needle: parametre
 * Return: str
 */
char *_strstr(char *haystack, char *needle)
{
	char *substr, *firststr, *retstr;

	firststr = haystack;
	if (!*haystack)
		return ("NULL");
	while (*firststr != '\0')
	{
		substr = needle;
		retstr = firststr;
		while (*substr == *firststr && *substr != '\0')
		{
			firststr++;
			substr++;
		}
		if (*substr == '\0')
			return (retstr);
		else if (*firststr == '\0')
			return ("NULL");
		firststr++;
	}
	return (NULL);
}
