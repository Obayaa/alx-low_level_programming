#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* count_word - counts the number of words in a string
* @s: string to count words in
*
* Return: the number of words in the string
*/
int count_word(char *s)
{
int flag = 0, w = 0;

while (*s != '\0')
{
if (*s == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
s++;
}
return (w);
}

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i = 0, k = 0, len = 0, words = 0, c = 0, start = 0, end = 0;

while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);

matrix = (char **)malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);

while (i <= len)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
i++;
}

matrix[k] = NULL;

return (matrix);
}
