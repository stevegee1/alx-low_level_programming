#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int x, y, w, z;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 3; y++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (z = 0; z <= 9; z++)
				{
					printf("%d%d:%d%d", (x), (y), (w), (z));
					_putchar (32);
					_putchar (10);
				}
			}
		}
	}
}

