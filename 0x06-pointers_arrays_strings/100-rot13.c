#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
int i, j;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

i = 0;
while (s[i])
{
j = 0;
while (letters[j])
{
if (s[i] == letters[j])
{
s[i] = rot13[j];
break;
}
j++;
}
i++;
}

return (s);
}
