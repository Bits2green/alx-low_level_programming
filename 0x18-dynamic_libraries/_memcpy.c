#include "main.h"

/**
 *_memcpy - copies bytes from memory area src to memory area dest
 *@dest: destination area memory
 *@src: source memory area
 *@n: data
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
a = 0;

while (a < n)
{
dest[a] = src[a];
a++;
}
}