#include <stdlib.h>
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
 * chcount - retu the sum of all ch passed as arg
 * @av: arg
 * Return: int sum
 */
int chcount(char *av[])
{
	int i, sum;

	i = 0;
	sum = 0;
	while (av[i])
	{
		sum += _strlen(av[i]);
		i++;
	}
	return (sum);
}
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: nbr arg
 * @av: arg
 * Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, sum, k;
	char *p;

	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	sum = chcount(av);
	p = malloc((sizeof(char) * sum) + ac + 1);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			p[k] = av[i][j];
			j++;
			k++;
		}
		p[k] = '\n';
		k++;
		i++;
	}
	k++;
	p[k] = '\0';
	k = 0;
	return (p);
}
