#include "main.h"

/**
* _strncat - join two strings
*
*@dest: string 1
*@src: string to add
*@n: size of src to add
* Return: concatenated strings
*/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (i < n)
	{
	if (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	i++;
	}

	*ptr = '\0';

return (dest);
}
