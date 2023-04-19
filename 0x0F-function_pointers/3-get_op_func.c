#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct fct to perform
 *               the operation asked by the user.
 * @ss: The operator passed as argument.
 *
 * Return: A ptr to the fct corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *ss))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (ops[k].o != NULL && *(ops[k].o) != *ss)
		k++;

	return (ops[k].t);
}

