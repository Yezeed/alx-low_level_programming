#include "main.h"

/**
 * more_numbers - Prints the numbers from 0-14 10 times.
 * using '_putchar' on 3 times.
 * Return: void
 */

void more_numbers(void)
{
	int j, k;

	for (k = 0; k <= 9; k++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
