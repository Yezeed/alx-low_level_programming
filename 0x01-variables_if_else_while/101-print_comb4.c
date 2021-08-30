#include <stdio.h>

/**
* main - main block
* Description: Print all possible combinations of three digits.
* Print only the smallest combinations
* Number must be printed in ascending order using 'putchar'
* 'putchar' function is allowed only for six times maximum
* Return : zero
*/

int main(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 1000)
	{
		j = i / 100; /* three digits */
		k = (i / 10) % 10; /* two digits */
		l = i % 10; /* single digits */

		if (j < k && k < l)
		{
			putchar(j + '0');
		putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
