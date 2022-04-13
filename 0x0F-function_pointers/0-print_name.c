
/**
 *print_name - print name as is.
 *@name: name of the person
 *
 *@f: pointer to the printing function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char*))
{
	if (name && f)
		f(name);
}
