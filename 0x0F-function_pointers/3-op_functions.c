#include "function_pointers.h"
#include <stdio.h>

/**
 * op_add - function for addition
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: the first number
 * @b: the second number
 *
 * Return: the subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function for division
 * @a: the first number
 * @b: the second number
 *
 * Return: the division
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function for modulo
 * @a: the first number
 * @b: the second number
 *
 * Return: the modulo
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
