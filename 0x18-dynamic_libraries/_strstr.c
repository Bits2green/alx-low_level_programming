#include "main.h"
#include <stdlib.h>

/**
 *_strstr - find the first occurence
 *@haystack: string
 *@needle: string
 *
 *Return: the pointer to the first occurence
 */
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{

	int i = 0;
	int f = 0;
	int k, s;

	for (s = 0; needle[s]; s++)
	;
	if (s == 0)
	return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[f])
		{
			i++;
			f++;
			for (k = i; haystack[k]; k++)
			{
				if (needle[f] == '\0')
					return (&(haystack[i - 1]));
				if (haystack[k] != needle[f])
					break;
				f++;
			}
		}
		i++;
		f = 0;
	}
	return (NULL);
}