#include "main.h"
#include <ctype.h>

/**
 * _isupper - function block
 * Description: check for uppercase
 * @c: integer
 * Return: 0
 */

int _isupper(int c)
{
int x = 0;

if (c >= 65 && c <= 90)
x = 1;
return (x);
}