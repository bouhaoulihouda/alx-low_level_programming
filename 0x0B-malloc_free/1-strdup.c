#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aa;
	int l, p = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[l] != '\0')
		l++;

	aaa = malloc(sizeof(char) * (l + 1));

	if (aa == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		aa[p] = str[p];

	return (aa);
}

