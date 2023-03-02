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

	while (*dest)
	{
		dest++;
	}
	while (x <= n)
	{
		dest = src[x];
		src++;
		dest++;
		x++;

	}

	*dest = '\0';

	return (dest);
}
