#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int il = 0;


	for (; s[il] >= '\0'; il++)
	{
		if (s[il] == c)
			return (&s[il]);
	}
	return (0);
}

