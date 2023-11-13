#include "main.h"
#include <stdlib.h>

/**
 *_strpbrk - locate the first occurence in the string
 *@s: string
 *@accept: string
 *
 *Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int a = 0;
int f = 0;

for (a = 0; s[a]; a++)
{
for (f = 0; accept[f]; f++)
if (*(accept + f) == s[a])
return (&(s[a]));
}
return (NULL);
}