#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to find
 *
 * Return: pointer to the beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

while (*haystack)
{
i = 0;
j = 0;
while (needle[j] && haystack[i] == needle[j])
{
i++;
j++;
}
if (!needle[j])
return (haystack);
haystack++;
}
return (NULL);
}
