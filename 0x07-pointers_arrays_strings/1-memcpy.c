#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to destination array where the content is to be copied
 * @src: pointer to source array to copy from
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
return (dest);
}
