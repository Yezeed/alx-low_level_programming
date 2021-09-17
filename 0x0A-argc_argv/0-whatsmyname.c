#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program prints its name.
 * Even when the program is renamed without compiling.
 * @argv: argument vector
 * @argc: argument count
 * Return: success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (argc == 1)
			printf("%s\n", argv[count]);
		else
			break;
	}
	return (0);
}
