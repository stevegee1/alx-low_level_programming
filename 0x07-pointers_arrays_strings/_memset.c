#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
memset(*s,b,n);
return s;
}
