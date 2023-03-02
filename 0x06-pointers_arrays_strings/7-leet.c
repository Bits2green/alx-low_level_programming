#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int q, r;
	char v[] = "aAeEoOtTlL";
	char w[] = "4433007711";

	for (q = 0; *(s + q); q++)
	{
		for (r = 0; r <= 9; r++)
		{
			if (v[r] == s[q])
				s[q] = w[r];
		}
	}
	return (s);
}
