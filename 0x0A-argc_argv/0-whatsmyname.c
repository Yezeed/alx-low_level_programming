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
	printf("%s\n", argv[0]);
	return (0);
}
