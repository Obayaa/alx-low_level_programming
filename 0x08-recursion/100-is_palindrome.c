#include "main.h"

/**
 * palindrome_checker - checks if a string is a palindrome recursively
 * @start: a pointer to the start of the string
 * @end: a pointer to the end of the string
 *
 * Return: (1) if s is a palindrome, (0) otherwise
 */
int palindrome_checker(char *start, char *end)
{
	if (*start != *end)
		return (0);
	if (start >= end)
		return (1);
	return (palindrome_checker(start + 1, end - 1));
}

/**
 * end_of_string - finds the end of a string recursively
 * @s: the string to check
 *
 * Return: a pointer to the end of the string
 */
char *end_of_string(char *s)
{
	if (*s == '\0')
		return (s);
	return (end_of_string(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: (1) if s is a palindrome, (0) otherwise
 */
int is_palindrome(char *s)
{
char *end = end_of_string(s);

	if (*s == '\0')
		return (1);

return (palindrome_checker(s, end - 1));
}
