#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, l, n, len, k, digit;

	j = 0;
	l = 0;
	n = 0;
	len = 0;
	k = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && k == 0)
	{
		if (s[j] == '-')
			++l;

		if (s[j] >= '0' && s[j] <= '9')
		{
			digit = s[j] - '0';
			if (l % 2)
				digit = -digit;
			n = n * 10 + digit;
			k = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			k = 0;
		}
		j++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies 2 numbers
 * @argc: nb of args
 * @argv: array of args
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, nb1, nb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	nb1 = _atoi(argv[1]);
	nb2 = _atoi(argv[2]);
	result = nb1 * nb2;

	printf("%d\n", result);

	return (0);
}

