#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: check the input
 *
 * @src: Check the input
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i <= src[i]; i++)
		dest[c++] = src[i];

	return (dest);
}
