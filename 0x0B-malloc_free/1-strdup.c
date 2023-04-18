#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* _strdup - create a duplicate of a string
*
* @str: - copy of string
* Return: pointer to duplicated string
*/
char *_strdup(char *str)
{
	unsigned int len = 0;
	char *array, *tempArr = str, *start;

	if (str == NULL)
	{
	return (NULL);
	}

	while (*tempArr != '\0')
	{
	len++;
	tempArr++;
	}

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
	{
	return (NULL);
	}

	start = array;

	while (*str != '\0')
	{
	*array = *str;
	str++;
	array++;
	}
	*array = '\0';

return (start);
}
