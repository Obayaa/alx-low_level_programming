#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* str_concat - join two string
*
* @s1: string 1
* @s2: string 2
*
* Return: concatenated string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *start, *array;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[len1] != '\0')
	{
	len1++;
	}
	while (s2[len2] != '\0')
	{
	len2++;
	}
	array = malloc(sizeof(char) * (len1 + len2 + 1));
	if (array == NULL)
	{
	return (NULL);
	}
	start = array;
	while (*s1 != '\0')
	{
	*array = *s1;
	array++;
	s1++;
	}
	while (*s2 != '\0')
	{
	*array = *s2;
	array++;
	s2++;
	}
	*array = '\0';
return (start);
}
