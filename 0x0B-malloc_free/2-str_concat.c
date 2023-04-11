#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input 1 to concat
 * @s2: input 2 to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	int j, cj;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = cj = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[cj] != '\0')
		cj++;
	cct = malloc(sizeof(char) * (j + cj + 1));

	if (cct == NULL)
		return (NULL);
	j = cj = 0;
	while (s1[j] != '\0')
	{
		cct[j] = s1[j];
		j++;
	}

	while (s2[cj] != '\0')
	{
		cct[j] = s2[cj];
		j++, cj++;
	}
	cct[j] = '\0';
	return (cct);
}
