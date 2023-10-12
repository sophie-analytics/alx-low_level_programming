#include "3-calc.h"

/**
 * op_add - function for addition
 * op_sub - function for substraction
 * op_mul - function for multiplication
 * op_div - function for division
 * op_mod - function for modulus
 * @a: the intger it takes
 * @b: the integer it takes
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	return (0);
}
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}
