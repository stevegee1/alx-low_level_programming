/**
 * _isalpha - function that checks for alpha character
 * @c: integer
 * Return: Integer
 */
int _isalpha(int c)
{
int x, y;
for (x = 65; x <= 90; x++)
{
if (c == x)
{
return (1);
}
}
for (y = 97; y <= 122; y++)
{
	if (c == y)
	{
		return (1);
	}
}
return (0);
}
