#include "main.h"

/**
 * main - print_alphabet_x10: Print alphabet 10 times.
 * Output will be in lowercase.
 * Return: void
 */

void print_alphabet_x10(void);
int main(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
