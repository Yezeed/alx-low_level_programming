#include "main.h"

/**
 * print_line - Prints a straight line in the terminal using '_'.
 * @n: the number of _ characters to be printed.
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar(' ');
	}

	_putchar('\n');
}
