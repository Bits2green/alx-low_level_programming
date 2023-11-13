#include "main.h"

/**
 *_isdigit - function to check for digit
 *@c: integer
 *Return: a
 */

int _isdigit(int c)
{
int j = 0;

if (c >= 48 && c <= 57)
j = 1;
return (j);
}
