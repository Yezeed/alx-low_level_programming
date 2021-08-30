#include <stdio.h>

/**
* main - main block
* Descrition: Print all possible combination of two digits.
* Only the smallest combinations must be printed.
* Numbers must be arranged in ascending or separated by commas.
* Only 'putchar' function is allowed for 5 times maximum.
* Return: 0
*/

int main(void)
{
	int i, e, f;

	i = 0;

	while (i < 100)
	{
		e = i % 10; /* single digits */
		f = i / 10; /* double digits */

		if (f < e)
		{
			putchar(f + '0');
			putchar(e + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
