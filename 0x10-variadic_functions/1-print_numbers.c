#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints nbs, followed by a new line.
* @sep: The string to be printed between numbers.
* @m: The nb of int passed to the fct.
* @...: A variable nb of nbs to be printed.
*/
void print_numbers(const char *sep, const unsigned int m, ...)
{
	va_list nms;
	unsigned int ind;

	va_start(nms, m);

	for (ind = 0; ind < m; ind++)
	{
		printf("%d", va_arg(nms, int));

		if (ind != (m - 1) && sep != NULL)
			printf("%s", sep);
	}


	printf("\n");

	va_end(nms);
}
