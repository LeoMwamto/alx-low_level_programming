#include "function_pointers.h"

/**
 * *print_name - Print a name.
 * @name: the outcome after prnting
 * @f: A pointer to a function printig a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
