/**
 * factorial- writes the character c to stdout
 * The character to print
 * @n: integer argument passed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n <= 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}

}
