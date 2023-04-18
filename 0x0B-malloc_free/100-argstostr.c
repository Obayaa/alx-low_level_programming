#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: pointer to concatenated string or NULL if fails
*/
char *argstostr(int ac, char **av)
{
char *str;
int i = 0, j = 0, len = 0, k = 0;

if (ac == 0 || av == NULL)
{
return (NULL);
}
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++;
i++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
{
return (NULL);
}
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j] != '\0')
{
str[k++] = av[i][j];
j++;
}
str[k++] = '\n';
i++;
}
str[k] = '\0';
return (str);
}
