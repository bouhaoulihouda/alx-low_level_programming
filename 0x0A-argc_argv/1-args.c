#include <stdio.h>
#include "main.h"

/**
 * main - print the nb of arguments passed to the program
 * @argc: nb of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

