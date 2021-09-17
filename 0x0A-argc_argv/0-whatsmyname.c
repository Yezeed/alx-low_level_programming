#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints its name.
 * Even when the program is renamed without compiling.
 * Return: success
 */

int main(int argc, char *argv[])
{
	printf("Program name is: %s\n", argv[0]);
	return (0);
}
