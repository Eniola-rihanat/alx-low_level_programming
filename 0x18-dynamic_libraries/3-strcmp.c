#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: Check the input
 *
 * @s2: Check the input
 *
 * Return: k
 */

int _strcmp(char *s1, char *s2)
{
	int c, k;

	c = 0;
	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			k = s1[c] - s2[c];
			break;
		}
		else
		{
			k = s1[c] - s2[c];
		}
		c++;
	}

	return (k);
}
