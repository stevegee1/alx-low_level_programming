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
if (x == c)
{
return (1);
}
}
return (0);
}
