#include "main.h"

/**
 * find_sqrt - returns the natural square root of a number
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 *
 * Return: the natural square root of n, or -1
 */
int find_sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
else
{
return (find_sqrt(n, i + 1));
}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
else
{
return (find_sqrt(n, 1));
}
}
