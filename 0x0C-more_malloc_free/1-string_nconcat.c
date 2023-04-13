#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a str to another str
 * @s1: str to append to
 * @s2: str to concatenate from
 * @n: nmb of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *q;
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		q = malloc(sizeof(char) * (ln1 + n + 1));
	else
		q = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!q)
		return (NULL);

	while (i < ln1)
	{
		q[i] = s1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		q[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		q[i++] = s2[j++];

	q[i] = '\0';

	return (q);
}

