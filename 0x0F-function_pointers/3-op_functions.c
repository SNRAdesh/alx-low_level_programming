#include "3-calc.h"
/**
 * op_add - adding two numbers.
 * @a: 1st  number
 * @b: 2nd number
 * Return: sum of numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracting two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: difference btw numb
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipling two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: multiplication of two numbs
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividing two numbers.
 * @a: 1st number.
 * @b: 2nd number.
 * Return: quotient
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
 * op_mod - calculates the module of two numbers.
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder of the division.
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
