#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: string at the begining
 * @src: string to be added at the end
 * @n: number of bytes in src
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x + y] = src[y];
		y++;

	}

	dest[x + y] = '\0';

	return (dest);
}
