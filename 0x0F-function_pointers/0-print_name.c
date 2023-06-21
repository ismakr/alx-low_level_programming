/**
 * print_name -  prints a name. using ptr to fun
 * @name: ptr to str name to be printed
 * @f: ptr the fun that prints the name.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
