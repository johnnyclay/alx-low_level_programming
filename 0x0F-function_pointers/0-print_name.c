
/**
 * print_name - print name as is.
 *@name - name of the person
 *
 *@f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char*))
{
	if (name && f)
		return;
	f(name);
}
