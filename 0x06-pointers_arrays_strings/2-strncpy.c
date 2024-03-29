#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first string
 * @src: second string
 * @n: length of int
 * Return:0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (*(src + x) != '\0' && x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}

	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
