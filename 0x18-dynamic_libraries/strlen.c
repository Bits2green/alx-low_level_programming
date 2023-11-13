#include "main.h"

/**
*_strlen - count the length of a string
*@s: string
*
*Return: the value of the length i
*/

int _strlen(char *s)
{
int x = 0;

while (s[x])
x++;

return (x);
}
