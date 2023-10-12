#include "3-calc.h"

/**
 * op_add - function for addition
 * @a: the intger it takes
 * @b: the integer it takes
 * Return: The result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function for substraction
 * @a: The integer it takes
 * @b: The integer it takes
 * Return: The result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  * op_mul - function for mulitplication
 *   * @a: The integer it takes
 *    * @b: The integer it takes
 *     * Return: The result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  * op_div- function for division
 *   * @a: The integer it takes
 *    * @b: The integer it takes
 *     * Return: The result
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	return (0);
}
/**
 *  * op_mod - function for modulus
 *   * @a: The integer it takes
 *    * @b: The integer it takes
 *     * Return: The result
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	return (0);
}
