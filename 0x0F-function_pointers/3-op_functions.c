#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add	-	function that return sum of int
 * @a:	first number
 * @b:	second number
 * Return: 0
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub	-	function that return sub of int
 * @a:	first number
 * @b:	second number
 * Return: 0
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}


/**
 * op_mul	-	function that return mul of int
 * @a:	first number
 * @b:	second number
 * Return: 0
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}


/**
 * op_div	-	function that return div of int
 * @a:	first number
 * @b:	second number
 * Return: 0
 */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}


/**
 * op_mod	-	function that return remainer of int
 * @a:	first number
 * @b:	second number
 * Return: 0
 */

int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
