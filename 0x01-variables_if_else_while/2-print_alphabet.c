#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - main block
* Description: Prints the alphabet in lowercase.
* Return: zero
*/

char main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
