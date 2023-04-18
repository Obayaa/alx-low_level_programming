#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

/**
* main - Check the code
* @argc: number of arguments
* @argv: arguments
* Return: Nothing
*/
int main(int argc, char **argv)
{
int num1, num2, result;
char *endptr;

if (argc != 3)
{
printf("Error\n");
return (98);
}

errno = 0;
num1 = strtol(argv[1], &endptr, 10);
if (errno != 0 || *endptr != '\0' || num1 > INT_MAX || num1 < 0)
{
printf("Error\n");
return (98);
}

errno = 0;
num2 = strtol(argv[2], &endptr, 10);
if (errno != 0 || *endptr != '\0' || num2 > INT_MAX || num2 < 0)
{
printf("Error\n");
return (98);
}

result = num1 *num2;
printf("%d\n", result);

return (0);
}
