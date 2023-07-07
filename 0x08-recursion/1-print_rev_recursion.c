#include <unistd.h>
/**
 * _print_rev_recursion - function that prints a string, followed by a new line
 * @s: pointer to char
 * Return: string and new line
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_print_rev_recursion(s + 1);
write(1, s, 1);
}
}
