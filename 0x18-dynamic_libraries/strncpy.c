#include "main.h"

/**
*_strncpy - copy strings
*@dest: destination
*@src: source
*@n: integer
*
*Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{

int f = 0;

for (f = 0; src[f] != '\0'; f++)
{
if (f < n)
{
dest[f] = src[f];
}
}
for (; f < n; f++)
{
dest[f] = '\0';
}
return (dest);
}
