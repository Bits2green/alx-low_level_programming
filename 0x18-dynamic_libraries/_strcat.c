#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int e, h;

	e = h = 0;
	while (*(dest + e))
		e++;
	while ((*(dest + e) = *(src + h)))
	{
		e++;
		h++;
	}
	return (dest);
}