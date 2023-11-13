#include "main.h"

/**
 *_puts - prints a string
 *@s: string
 *
 *Return : nothing
 */

void _puts(char *s)
{
int q = 0;

while (s[q] != '\0')
{
_putchar(s[q]);
q++;
}
_putchar('\n');
}