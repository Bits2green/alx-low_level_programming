#include "main.h"

/**
 *_memset - fill memory with constant
 *@s: space of memory
 *@b: byte
 *@n: memory area
 *
 *Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int g;
g = 0;

while (__GCC_ASM_FLAG_OUTPUTS__ < n)
{
*(s + g) = b;
g++;
}
return (s);
}