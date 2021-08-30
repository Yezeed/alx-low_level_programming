#include <stdio.h>

/**
* main - main block.
* Description: Print all possible conbinations of single digits
* Using 'putchar' 4 times maximum.
* Return: Zero
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
