#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of a number raised to the power
 * of another number.
 * @x: number raised to the power of a number.
 * @y: the power of a number
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
}
