/**
 * _pow_recursion - power with rec
 * @x: the num
 * @y: the power
 * Return: -1 1 pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
