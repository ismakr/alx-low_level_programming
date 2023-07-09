#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - ret the length of str
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int i
 */
int _strlen(const char *s)
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
	i = _strlen(s) - 1;
	while (i >= 0 && s[i] != '\0' && j <= i)
	{
		swp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = swp;
		i--;
		j++;
	}
}
/**
 * _strcpy - cp str
 * @dest: Description of parameter x
 * @src: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/**
 * int binary_to_uint - converts a binary number to an unsigned int.
 * @b: ptr to the binary nbr (string)
 * Return:  the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1.
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int n_dig, i, n_pos, sum;
	int *arr;
	char *s;
	char *str;

	n_dig = _strlen(b);
	s = malloc(sizeof(char) * n_dig + 1);
	str = _strcpy(s, b);
	arr = malloc(sizeof(int) * n_dig);
	i = 0;
	n_pos = 1;
	rev_string(str);
	while (i < n_dig)
	{
		arr[i] = n_pos;
		i++;
		n_pos *= 2;
	}
	i = 0;
	sum = 0;
	while (i < n_dig)
	{
		if ((!(s[i] >= '0' && s[i] <= '1')) || (s == NULL))
			return (0);
		sum += arr[i] * (s[i] - '0');
		i++;
	}
	return (sum);
}
