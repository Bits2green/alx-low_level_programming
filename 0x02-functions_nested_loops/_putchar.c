#include <unistd.h>

/**
 * _putchar - prints '_putchar' followed by a new line
 * @c: character to be printed to standard output
 * Return: number of bytes written on success and -1 on on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
