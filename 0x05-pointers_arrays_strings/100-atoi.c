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
	int pos_count, neg_count, i, nb;

	pos_count = 0;
	neg_count = 0;
	i = 0;
	nb = 0;
	while (!(*(s + i) >= 48 && *(s + i) <= 57))
	{
		if (*(s + i) == 43)
			pos_count += 1;
		if (*(s + i) == 45)
			neg_count += 1;
		i++;
	}
	while (*(s + i) >= 48 && *(s + i) <= 57)
	{
		nb = 10 * nb + (*(s + i) - '0');
		i++;
	}
	if (pos_count < neg_count)
		nb *= -1;
	return (nb);
}
