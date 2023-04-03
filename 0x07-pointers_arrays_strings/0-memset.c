#include "main.h"

/**
* *_memset - set's memory
*
* @s: source
* @b: dest
* @n: number of bytes
* Return: Always 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	
	while (n-- > 0)
	{
		*p++ = b;
	}
return (s);
}

