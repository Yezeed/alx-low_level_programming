#include <stdio.h>

/**
* main - main block
* Description: Print all digits in base 10 from '0' using putchar.
* Return: Zer0
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
