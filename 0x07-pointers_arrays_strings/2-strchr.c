#include "main.h"
/**
 * _strchr - locate a character in a string
 *
 * @s: pointer to the string to search in
 * @c: the character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0' && *s != c)
{
s++;
}
return (*s == c ? s : NULL);
}
