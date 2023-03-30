#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes per line
 * @b: Pointer to the buffer
 * @size: Size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;

		while (j < 10)
		{
			if (j + i < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");

			j++;
		}

		j = 0;
		while (j < 10 && j + i < size)
		{
			if (*(b + i + j) >= 32 && *(b + i + j) <= 126)
				printf("%c", *(b + i + j));
			else
				printf(".");

			j++;
		}

		printf("\n");
		i += 10;
	}
}
