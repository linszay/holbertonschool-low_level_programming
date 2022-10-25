#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: input name
 * @f: pointer to function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
