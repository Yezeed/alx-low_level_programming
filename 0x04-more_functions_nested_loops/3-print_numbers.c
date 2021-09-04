#include "main.h"

/**
 * print_numbers - function prints the number from 0-9
 * followed by new line, using '_putchar'
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
