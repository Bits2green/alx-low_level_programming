#include "function_pointers.h"

/**
 * print_nam - Entry
 * @name: name given
 * @f: function of the name
 *
 */

void print_name(char *name, void(*f)(char *))
{
	if (f != NULL && f != NULL)
		f(name);
}
