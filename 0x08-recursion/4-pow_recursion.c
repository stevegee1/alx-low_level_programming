/**
 * _pow_recursion - writes the character c to stdout
 * @x: The int x character
 * @y: The int y character
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
y--;
return (x * _pow_recursion(x, y));
}
}
