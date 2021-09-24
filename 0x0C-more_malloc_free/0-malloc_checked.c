#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * that returns a pointer the allocated memory using 'malloc'.
 * The function will cause normal process termination, if 'malloc' fails,
 * with a status value of 98.
 * @b:int size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *gh;

	gh = malloc(b);
	if (gh == NULL)
		exit(98);
	else
		return (gh);
}
