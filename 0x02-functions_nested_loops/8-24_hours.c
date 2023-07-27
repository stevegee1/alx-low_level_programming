#include "main.h"


/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
int x, y;


	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			if (x < 10)
			{
			_putchar('0');
			_putchar('0' + x);
			}
			else
			{
				_putchar('0' + x / 10);
				_putchar('0' + x % 10);
			}
			_putchar(':');
			if (y < 10)
			{
				_putchar('0');
				_putchar('0' + y);
			}
			else
			{
				_putchar('0' + y / 10);
				_putchar('0' + y % 10);
			}
			_putchar(32);
			_putchar(10);
}
}
}
