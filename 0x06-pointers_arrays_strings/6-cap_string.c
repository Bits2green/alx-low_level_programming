#include "main.h"

/**
 * cap_string - Entry
 * @s: first member
 *
 * Return: address of 's'
 */
char *cap_string(char *s)
{
	int r = 0, p;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + r))
	{
		if (*(s + r) >= 'a' && *(s + r) <= 'z')
		{
			if (r == 0)
				*(s + r) -= 'a' - 'A';
			else
			{
				for (p = 0; p <= 12; p++)
				{
					if (a[p] == *(s + r - 1))
						*(s + r) -= 'a' - 'A';
				}
			}
		}
		r++;
	}
	return (s);
}
