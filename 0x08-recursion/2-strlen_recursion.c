/**
 * _strlen_recursion - function that prints a string, followed by a new line
 * @s: pointer to char
 * Return: string and new line
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
