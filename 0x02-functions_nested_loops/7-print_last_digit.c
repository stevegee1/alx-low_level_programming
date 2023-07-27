#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a num
 * @c: integer
 * Return: integer
 */
int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
	x = -1 * x;
	}
	_putchar (x + '0');
	return (x);
}

