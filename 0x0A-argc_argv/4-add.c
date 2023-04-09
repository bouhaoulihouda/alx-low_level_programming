#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int cpt;

	cpt = 0;
	while (cpt < strlen(str)) /*count string*/

	{
		if (!isdigit(str[cpt])) /*check if str there are digit*/
		{
			return (0);
		}

		cpt++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int cpt;
	int str_to_int;
	int sum = 0;

	cpt = 1;
	while (cpt < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[cpt]))

		{
			str_to_int = atoi(argv[cpt]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		cpt++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}

