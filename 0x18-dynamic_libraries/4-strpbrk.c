#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string to search
 * @accept: pointer to set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
i = 0;
while (accept[i])
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (NULL);
}
