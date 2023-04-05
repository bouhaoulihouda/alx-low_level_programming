#include "main.h"
/**
 * _strlen_recursion -returns the length of a string
 * @s : the srting to be measured
 *
 * return : length of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if(*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
