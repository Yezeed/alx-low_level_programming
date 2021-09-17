#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program prints the number of argument.
 *
 * Return: success.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
