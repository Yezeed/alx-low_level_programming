#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Function concatenates two strings.
 * @n: sizeof int
 * @s1: string of char 1
 * @s2: string of char 2
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	char *nul = "";
	unsigned int x, y;

	x = y = 0;
	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	while (s1[x] != '\0')
		x += 1;
	while (s2[y] != '\0')
		y += 1;
	y++;
	if (n >= y)
		n = y;
	str = malloc(sizeof(*str) * n + (x + 1));
	if (str == NULL)
		return (NULL);
	x = 0;
	while (s1[x] != '\0')
	{
		str[x] = s1[x];
		x += 1;
	}
	y = 0;
	while (s2[y] != '\0' && y < n)
	{
		str[x] = s2[y];
		x++;
		y++;
	}
	str[x] = '\0';
	return (str);
}
