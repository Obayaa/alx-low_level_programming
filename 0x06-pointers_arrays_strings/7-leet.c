/**
 * leet - Encodes a string into 1337.
 *
 * @str: String to encode
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

i = 0;

while (str[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
j++;
}
i++;
}

return (str);
}
