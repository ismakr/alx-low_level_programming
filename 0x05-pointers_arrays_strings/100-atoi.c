/**
 * neg - check neg sign
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int nn
 */
int neg(char *s)
{
	int i;
	int nn;

	nn = 0;
	i = 0;
	while (*(s + i) < 48 || *(s + i) > 57)
	{
		if (*(s + i) == '-')
		{
			nn = nn + 1;
		}
		i++;
	}
	return (nn);
}
/**
 * pos - check the pos sign
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: pn
 */
int pos(char *s)
{
	int i;
	int pn;

	pn = 0;
	i = 0;
	while (*(s + i) < 48 || *(s + i) > 57)
	{
		if (*(s + i) == '+')
		{
			pn = pn + 1;
		}
		i++;
	}
	return (pn);
}
/**
 * _atoi - conv to int
 * @s: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: int 0 if not nub nb if nb
 */
int _atoi(char *s)
{
	int i;
	int pn;
	int nn;
	int nb;

	nb = 0;
	pn = pos(s);
	nn = neg(s);
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			nb = (nb + *(s + i)) - 48;
			if (*(s + (i + 1)) >= 48 && *(s + (i + 1)) <= 57)
			{
				nb = nb * 10;
			}
			if (!(*(s + (i + 1)) >= 48 && *(s + (i + 1)) <= 57))
			{
				break;
			}
		}
		i++;
	}
	if (pn < nn)
	{
		nb = nb * -1;
	}
	if (nb == 0)
	{
		return (0);
	}
	else
	{
		return (nb);
	}
}
