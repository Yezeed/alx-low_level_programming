#include <stdio.h>

/**
* main - main block
* Description: Print all digit of base 16 in lowercase.
* Return: 0
*/

int main(void)
{
	int i;
	int a;

	for (i = 1; i < 16; i++)
	{
		while (a == i)
		{
			putchar(i + '1');
		}
	}
	putchar('\n');

	return (0);
}
