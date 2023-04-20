#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strs, followed by a new line.
* @sep: The string to be printed between strs.
* @m: The number of strs passed to the fct.
* @...: A var nb of strs to be printed.
*
* Description: If separator is NULL, it is not printed.
*        If one of the strings if NULL, (nil) is printed instead.
*/
	void print_strings(const char *sep, const unsigned int m, ...)
	{
		va_list strg;
		char *st;
		unsigned int ind;


		va_start(strg, m);


		for (ind = 0; ind < m; ind++)
		{
			st = va_arg(strg, char *);


			if (st == NULL)
				printf("(nil)");
			else
				printf("%s", st);


			if (ind != (m - 1) && sep != NULL)
				printf("%s", sep);
		}


		printf("\n");


		va_end(strg);
	}

