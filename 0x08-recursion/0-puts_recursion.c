#include <unistd.h>
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: pointer to char
 * Return: string and new line
 */
void _puts_recursion(char *s)
{
char *ptr = s;
	if (*ptr == '\0')
{return;
}
write(1,ptr++,1);
_puts_recursion(ptr);
}
