#include "main.h"

/**
 * _sqrt_recursion_helper- performs square root logic recursively
 * @n: integer
 * @i: integer
 * Return: Integer
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_recursion_helper(n, i + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: integer
 * Return: Integer
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	x = _sqrt_recursion_helper(n, 1);
	return (x);
}
