#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The characters to accept in the search.
 *
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s)
{
char *a = accept;
while (*a)
{
if (*a == *s)
{
count++;
break;
}

a++;
}

if (!*a)
return (count);
s++;
}
return (count);
}
