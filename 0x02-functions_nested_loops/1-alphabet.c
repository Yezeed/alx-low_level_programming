#include "main.h"

/**
* print_alphabet -  Print the alphabet in lowercase
* Return: (0)
*/

void print_alphabet(void);
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
