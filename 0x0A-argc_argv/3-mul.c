#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: int
 */

int main(int argc, char *argv[])
{
	int count;
	int i;
	int k;
	int res;

	count = i = k = res = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			if (argc == 3)
			{
				if (count == 1)
					i = atoi(argv[count]);
			else
				if (count == 2)
					k = atoi(argv[count]);
			}
			else
			{
				printf("error\n");
				return (1);
			}
			res = (i * k);
			count++;
		}
		printf("%d\n", res);
	}

	return (0);
}
