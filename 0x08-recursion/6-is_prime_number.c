#include "main.h"

int prime_helper(int n, int i);
/**
 * is_prime_number - checks if an integer is prime
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_helper(n, 2));
}

/**
 * prime_helper - recursively checks if an integer is prime
 * @n: the integer to check
 * @i: the current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_helper(int n, int i)
{
if (i == n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (prime_helper(n, i + 1));
}
