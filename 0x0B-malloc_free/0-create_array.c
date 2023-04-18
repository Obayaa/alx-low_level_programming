#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* create_array - create array of chars
*
* @size: memory size
* @c: char
* Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}

	while (i < size)
	{
	array[i] = c;
	i++;
	}

return (array);
}
