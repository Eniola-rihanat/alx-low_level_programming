#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: Check the input
 *
 * @needle: Check the input
 *
 * Return: h
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
