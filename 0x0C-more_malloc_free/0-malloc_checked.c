#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry
 * @b: first member
 * 
 * Return: Pointer to allocated memory
 */
 
 void *malloc_checked(unsigned int b)
 {
	 void *x;
	 
	 x = malloc(b);
	 
	 if (x == NULL)
	     exit(98);
	return (x);
 }
