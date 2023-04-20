#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Returns the sum of all its paramters.
* @m: The nb of paramters passed to the fct.
* @...: A var nb of paramters to calc the sum of.
*
* Return: If m == 0 - 0.
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int m, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, m);

	for (i = 0; i < m; i++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}
