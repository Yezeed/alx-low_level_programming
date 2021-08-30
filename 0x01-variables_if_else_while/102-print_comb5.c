#include <stdio.h>

/**
* main - main block
* Description: Print all possible combinations of two 2 digits
* '1' should be printed a '01'
* Combinations must be printed in ascending order using 'putchar'
* The 'putchar' function is allowed 8 times maximum.
* Return: 0
*/

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* double numbers */
		b = i % 10; /* single numbers */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* double digits */
			d = j % 10; /* single digits */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(d + '0');
				putchar(c + '0');

				if (! (a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
