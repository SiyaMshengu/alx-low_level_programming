#include "main.h"

/**
 * _strcat - funtion that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int x = 0, dest_len = 0;
while (dest[x++])
dest_len++;

for (x = 0; src[x]; x++)
dest[dest_len++] = src[x];

return (dest);
}
