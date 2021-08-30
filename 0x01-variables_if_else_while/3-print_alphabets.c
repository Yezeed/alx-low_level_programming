#include <stdio.h>

/**
* main - main block
* Description: Prints the alphabet in lowercase and uppercase.
* Return: 0
*/

int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar ('\n');

	return (0);
}
