#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: integer
 * Return: int
 */
int _islower(int c)
{
int x;
for (x =  97; x <= 122; x++)
{
if (c == x)
{
return (1);
}
else
{
return (0);
}
}
return (0);
}
