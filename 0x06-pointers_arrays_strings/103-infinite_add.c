#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @num1: A string representation of the first number.
 * @num2: A string representation of the second number.
 * @result: The buffer to store the result in.
 * @result_size: The size of the result buffer.
 *
 * Return: If the result fits in the buffer, return a pointer to @r.
 * else return 0.
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
int length_num1 = 0, length_num2 = 0, operation, carry = 0, big, d1, d2;

while (*(num1 + length_num1) != '\0')
length_num1++;
while (*(num2 + length_num2) != '\0')
length_num2++;
if (length_num1 >= length_num2)
big = length_num1;
else
big = length_num2;
if (result_size <= big + 1)
return (0);
result[big + 1] = '\0';
length_num1--, length_num2--, result_size--;
d1 = *(num1 + length_num1) -'0';
d2 = *(num2 + length_num2) -'0';
while (big >= 0)
{
operation = d1 + d2 + carry;
if (operation >= 10)
carry = operation / 10;
else
carry = 0;
if (operation > 0)
*(result + big) = (operation % 10) + '0';
else
*(result + big) = '0';
if (length_num1 > 0)
length_num1--, d1 = *(num1 + length_num1) -'0';
else
d1 = 0;
if (length_num2 > 0)
length_num2--, d2 = *(num2 + length_num2) -'0';
else
d2 = 0;
big--, result_size--;
}
if (*result == '0')
	return (result + 1);
return (result);
}
