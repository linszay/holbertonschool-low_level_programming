#include "variadic_functions.h"
/**
 * print_strings -  function that prints strings
 * followed by a new line
 * @separator: input separator
 * @n: number of items
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int count;

	va_start(valist, n);
	for (count = 0; count < n; count++)
	{
		char *s;

		s = va_arg(valist, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
