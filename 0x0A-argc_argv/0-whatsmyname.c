#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program prints its name.
 * Even when the program is renamed without compiling.
 * Return: success
 */

int main(int argc, char *argv[])
{
	printf("Program's name is: %s\n", argv[0]);
	return (0);
}
