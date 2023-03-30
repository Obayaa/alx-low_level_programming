#include "main.h"

/**
* reverse_array - reverses an array's indexes
*
* @a: array
* @n: number of elements
* Return: None
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int tempNum;
	int j = n - 1;

	while (i < j)
	{
	tempNum = a[i];
	a[i] = a[j];
	a[j] = tempNum;

	i++;
	j--;
	}
}
