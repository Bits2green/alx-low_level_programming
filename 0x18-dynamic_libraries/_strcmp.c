#include "main.h"

/**
 *_strcmp - compare strengs
 *@s1: string
 *@s2: string
 *
 *Return: integer x
 */

int _strcmp(char *s1, char *s2)
{
int e = 0;
int x = 0;

while (s1[e] == s2[e] && s1[e] != '\0')
{
e++;
}
x += s1[e] - s2[e];
return (x);
}