#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return:
 */
void print_alphabet_x10(void)
{
int x, y;
x = 0;
while (x < 10)
{
for (y = 97; y <= 122; y++)
{
_putchar (y);
}
x++;
_putchar(10);
}
}
