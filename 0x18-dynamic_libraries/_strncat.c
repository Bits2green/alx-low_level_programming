#include "main.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int y = 0;
int e = 0;

while (dest[e] != '\0')
{
e++;
}

for (y = 0; y < n && src[y] != '\0'; y++)

dest[y + 1] = src[e];
dest[y + e + 1] = '\0';

return (dest);
}