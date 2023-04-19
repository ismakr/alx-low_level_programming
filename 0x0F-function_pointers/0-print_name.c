/**
 * print_name - prints a name.
 * @name: name to be printed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name_as_is;
	f(name);
}
