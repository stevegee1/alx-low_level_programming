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

	if (c < 0)
	{
	c = -1 * c;
	}
	x = c % 10;
	printf("%d", x);
	return (x);
}

