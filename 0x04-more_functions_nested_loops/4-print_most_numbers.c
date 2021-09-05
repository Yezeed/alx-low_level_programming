#include "main.h"

/**
 * print_most_numbers - function prints numbers from 0-9
 * 2 and 4 are not printed, using '_putchar' only twice.
 * Return: void.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
