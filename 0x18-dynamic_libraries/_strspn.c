#include "main.h"

/**
 *_strspn - get the length of a prefix substring
 *@s: string
 *@accept: string
 *
 *Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int a, j;

for (a = 0; s[a]; a++)
{
for (j = 0; accept[j]; j++)
{
if (s[a] == accept[j])
break;
}
if (s[a] != accept[j])
break;
}
return (a);
}
