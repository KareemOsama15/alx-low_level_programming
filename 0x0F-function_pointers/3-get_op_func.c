#include "3-calc.h"

/**
 * get_op_func -  that selects the correct function
 *   to perform the operation
 *
 * @s: operator
 *
 * Return: point to choosen function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops->op[i])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
