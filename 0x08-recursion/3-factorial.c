#include "main.h"

/**
 * factorial - Returns the factorial of a nb
 * @n: the number to return the factorial from
 *
 * Return: fatctorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{return (-1);}
	if (n == 0)
	{return (1);}
	return (n * factorial(n - 1));
}
