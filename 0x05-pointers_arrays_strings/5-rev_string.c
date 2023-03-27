#include "main.h"
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
 * rev_string - rev
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void rev_string(char *s)
{
	char swp;
	int i;
	int j;

	j = 0;
	i = strlen(s) - 1;
	while (i >= 0 && s[i] != '\0' && j <= i)
	{
		swp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = swp;
		i--;
		j++;
	}
}
