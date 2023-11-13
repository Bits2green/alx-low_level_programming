#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copy string including the terminating null byte
 *@dest: destination of string
 *@src: source of string
 *
 *Return: the value dest
 */

char *_strcpy(char *dest, char *src)
{
int c = 0;

for (c = 0; src[c]; c++)
dest[c] = src[c];
dest[c] = src[c];
return (dest);
}