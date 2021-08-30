#include <stdio.h>

/**
* main - main block
* Description: Print all digit of base 16 in lowercase.
* Using 'putchar' only 3 times.
* Return: 0
*/

int main(void)
{
	int i = '0';
	char c = 'a';

	while (i < 10)
	{
		putchar (i + '0');
		i++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
