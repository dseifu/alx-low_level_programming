#include "function_pointers.h"

/**
 * get_op_func - selects the correct function
 * @s: the arg sent
 *
 * Return: function pointer
*/

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s != NULL && s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
