#include "main.h"

/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
int x1 = 0, x2;
char leet[8] = {'o', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[++x1])
{
for (x2 = 0; x2 <= 7; x2++)
{
if (str[x1] == leet[x2] ||
str[x1] - 32 == leet[x2])
str[x1] = x2 + '0';
}
}
return (str);
}

