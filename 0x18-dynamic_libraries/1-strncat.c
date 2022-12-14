#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: Check the input
 *
 * @src: Check the input
 *
 * @n: check the input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, k;

	c = 0;
	while (dest[c])
		c++;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[c + k] = src[k];

	dest[c + k] = '\0';
	return (dest);
}
