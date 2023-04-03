#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int sum1 = 0, sum2 = 0;

while (i < size)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + size - i - 1);
i++;
}
printf("%d, %d\n", sum1, sum2);
}
