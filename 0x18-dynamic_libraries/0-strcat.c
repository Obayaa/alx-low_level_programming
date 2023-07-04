#include "main.h"

/**
* _strcat - joins two strings
*
* @dest: starting string
* @src: string to add
* Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}

	while (*src != '\0')
	{
	*ptr = *src;
	ptr++;
	src++;
	}

*ptr = '\0';
return (dest);
}
