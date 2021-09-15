#include "main.h"

/**
 * _puts_recursion - peints a string
 * followed by a new line
 * @s: string to print
 * Return: Always void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
