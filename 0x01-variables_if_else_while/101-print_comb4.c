#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int m;

	for (i = 0 ; i < 10 ; i++)
	{
		for  (j = 0 ; j < 10 ; j++)
		{
			for (m = 0 ; m < 10 ; m++)
			{
				if (i < j && j < m)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(m + '0');
					if (i + j + m != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
putchar('\n');
return (0);
}
