#include "main.h"

/**
 * _strncat - concatenate two strings but add input number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at the end of dest
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int x = 0, dest_len = 0;
while (dest[x++])
dest_len++

for (x = 0; src[x] && x < n; x++)
dest[dest_len++] = src[x];

return (dest);
}
