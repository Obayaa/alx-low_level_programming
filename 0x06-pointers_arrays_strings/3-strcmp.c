#include "main.h"

/**
* _strcmp - compare two strings
*
* @s1: string 1
* @s2: string 2
* Return: if equal 0 else s1 - s2
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, num;

while (s1[i] != '\0')
{
if (s1[i] != s2[i])
{
num = s1[i] - s2[i];
break;
}
else
{
num = 0;
}
i++;
}
return (num);
}
