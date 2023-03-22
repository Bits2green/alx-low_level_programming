#include "function_pointers.h"

/**
 * print_name - Entry
 * @name: name given
 * @f: function of the name
 *
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL && f != NULL)
		f(name);
}
