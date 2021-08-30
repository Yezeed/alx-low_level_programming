#include <stdio.h>
/**
* main - main block
* Description: Prints the alphabet in lowercase and uppercase.
* Return: 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar ('\n');

	return (0);
}
